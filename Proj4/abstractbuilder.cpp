#include "abstractbuilder.h"
#include "employee.h"
#include "employee_database.h"
#include <QString>
#include <QFile>
#include <fstream>
#include <string>

AbstractBuilder::AbstractBuilder()
{
}

void AbstractBuilder::createFile(vector<CEmployee*> emps)
{
    std::ofstream txt_str;
    std::string file_name = getFileName();
    txt_str.open(file_name.c_str());

    std::string op = getOperand();

    txt_str << "First Name" << op << "Last Name" << op << "Salary" << op << "Hire Year\n";
    for (int i = 0; i < emps.size(); i++)
    {
        //txt_str << emps[i]->getFirstName();
        txt_str << emps[i]->getLastName() << op;
        txt_str << emps[i]->getFirstName() << op;
        txt_str << emps[i]->getSalary() << op;
        txt_str << emps[i]->getYearHired() << endl;
        //txt_str << emps[i]->getFirstName() << op << emps[i]->getLastName() << txt_str << op << emps[i]->getSalary() << "\n";
                   //txt_str << op << emps[i]->getYearHired << "\n";
    }

    txt_str.close();
}
