#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "addrecord.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
    //delete empDatabase;
}

void MainWindow::on_AddButton_clicked()
{
    AddRecord* newRec = new AddRecord(this);
    //listeners.push_back(newRec);
    newRec->show();
    connect(newRec, SIGNAL(employeeAdded(CEmployee)), this, SLOT(addToTable(CEmployee)));
    //connect()
    //connect(newRec, SIGNAL(accepted()), ui->tableWidget, SLOT(employeeAdd()));
    //connect(ui->horizontalSlider, SIGNAL(valueChanged(int)),
    //newListener, SLOT(setValue(int)));
}

void MainWindow::addToTable(CEmployee emp){

}
