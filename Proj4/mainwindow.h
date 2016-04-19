#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "addrecord.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
private:
    std::vector<AddRecord*> listeners;
    //CDatabase empDatabase = new CDatabase;

private slots:
    void on_AddButton_clicked();
    void addToTable(CEmployee);

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
