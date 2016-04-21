#ifndef ADDRECORD_H
#define ADDRECORD_H

#include <QDialog>
#include "employee.h"

namespace Ui {
class AddRecord;
}

class AddRecord : public QDialog
{
    Q_OBJECT

public:
    explicit AddRecord(QWidget *parent = 0);
    ~AddRecord();
signals:
    void employeeAdded(CEmployee*);
    //void added();
private slots:
    void on_buttonBox_accepted();

private:
    Ui::AddRecord *ui;
};

#endif // ADDRECORD_H
