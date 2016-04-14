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
}

void MainWindow::on_AddButton_clicked()
{
    AddRecord* newRec = new AddRecord(this);
    newRec->show();
    //connect(ui->horizontalSlider, SIGNAL(valueChanged(int)),
    //newListener, SLOT(setValue(int)));
}
