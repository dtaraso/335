#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "addrecord.h"
#include "employee.h"
#include "employee_database.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    CDatabase *empDatabase = new CDatabase;

private:
    //std::vector<AddRecord*> listeners;


private slots:
    void on_AddButton_clicked();
    void on_actionSave_triggered();
    void addToTable(CEmployee*);

    void sort_column(int);

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
