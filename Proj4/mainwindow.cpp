#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "addrecord.h"
#include <iostream>
#include "sort.h"
#include <algorithm>
#include <fstream>
#include "director.h"
#include "tabdelimitedbuilder.h"
#include "csvbuilder.h"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->tableWidget->horizontalHeader(), SIGNAL(sectionClicked(int)),
    this, SLOT(sort_column(int)));

}

MainWindow::~MainWindow()
{
    delete ui;
    delete empDatabase;
}

void MainWindow::on_AddButton_clicked()
{
    AddRecord* newRec = new AddRecord(this);
    newRec->show();
    connect(newRec, SIGNAL(employeeAdded(CEmployee*)), this, SLOT(addToTable(CEmployee*)));
}

void MainWindow::addToTable(CEmployee *emp){
    int row = ui->tableWidget->rowCount();
    ui->tableWidget->insertRow(row);
    QTableWidgetItem* fname = new QTableWidgetItem(QString::fromStdString(emp->getFirstName()));
    QTableWidgetItem* lname = new QTableWidgetItem(QString::fromStdString(emp->getLastName()));
    QTableWidgetItem* salary = new QTableWidgetItem(QString::number(emp->getSalary()));
    QTableWidgetItem* year = new QTableWidgetItem(QString::number(emp->getYearHired()));
    ui->tableWidget->setItem(row, 0, fname);
    ui->tableWidget->setItem(row, 1, lname);
    ui->tableWidget->setItem(row, 2, salary);
    ui->tableWidget->setItem(row, 3, year);
    this->empDatabase->AddRecord(emp);
}


void MainWindow::sort_column(int i){
    if(this->empDatabase->getAllEmployees().size() > 0)
    {
        //i
        //0 - fname
        //1 - lname
        //2 - salary
        //3 - hiring year
        //sort
        //0 - ascending
        //1 - descending
        Qt::SortOrder sort = ui->tableWidget->horizontalHeader()->sortIndicatorOrder();
        vector<CEmployee*> emp = this->empDatabase->getAllEmployees();
        switch (i){
            case 0:
                {
                if(sort == 0){
                    std::sort(emp.begin(), emp.end(), fnameAscending);
                }
                else{
                    std::sort(emp.begin(), emp.end(), fnameDescending);
                }
                break;
            }
            case 1:{
                if(sort == 0){
                     std::sort(emp.begin(), emp.end(), lnameAscending);
                }
                else{
                    std::sort(emp.begin(), emp.end(), lnameDescending);
                }
                break;
            }
            case 2:{
                if(sort == 0){
                    std::sort(emp.begin(), emp.end(), salaryAscending);
                }
                else{
                    std::sort(emp.begin(), emp.end(), salaryDescending);
                }
                break;
            }
            case 3:{
                if(sort == 0){
                     std::sort(emp.begin(), emp.end(), yearAscending);
                }
                else{
                     std::sort(emp.begin(), emp.end(), yearDescending);
                }
                break;
            }
            default:
                cout << "ERROR" << endl;
        }

        //clearing table and databse
        while (ui->tableWidget->rowCount() > 0)
        {
            ui->tableWidget->removeRow(0);
        }
        this->empDatabase->deleteAllEmployees();

        //putting data back into table
        for(unsigned int i = 0; i<emp.size(); i++){
            addToTable(emp[i]);
        }
    }
}

void MainWindow::on_actionSave_triggered()
{
    //vector<> substitute;
    vector<CEmployee*> allEmps = this->empDatabase->getAllEmployees();
    //std::ofstream txt_str;
    TabDelimitedBuilder *td = new TabDelimitedBuilder;
    CSVBuilder *cv = new CSVBuilder;
    Director *dir = new Director;
    //tab delimited file
    dir->setAbstractBuilder(td);
    dir->createFiles(allEmps);
    //csv file
    dir->setAbstractBuilder(cv);
    dir->createFiles(allEmps);
    cout << "adfadfa" << endl;
}




