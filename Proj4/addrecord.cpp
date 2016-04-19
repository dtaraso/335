#include "addrecord.h"
#include "ui_addrecord.h"
#include "employee.h"
#include <string>

AddRecord::AddRecord(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddRecord)
{
    ui->setupUi(this);
    //connect(this, SIGNAL(()),)
}

AddRecord::~AddRecord()
{
    delete ui;
}

void AddRecord::on_buttonBox_accepted()
{
    string fname = ui->lineEdit->text().toStdString();
    string lname = ui->lineEdit_2->text().toStdString();
    int salary = ui->lineEdit_3->text().toInt();
    int year = ui->lineEdit_4->text().toInt();
    CEmployee emp(fname,lname,salary,year);
    emit employeeAdded(emp);

    //connect(ui)
    //this->close();
}
