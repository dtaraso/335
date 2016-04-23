#include "abstractbuilder.h"
#include "EmployeeDatabase.h"
#include <QString>
#include <QFile>

AbstractBuilder::AbstractBuilder()
{
}

virtual string addOperand() = 0;

virtual string getFileName() = 0;

void createFile(vector<Employee*> emps)
{
    std::ofstream txt_str;
    std::string file_name = getFileName();
    txt_str.open(file_name.c_str());

    string op = addOperand();

    txt_str << "First Name" << op << "Last Name" << op << "Salary" << op << "Hire Year\n";
    for (int i = 0; i < emps.size(); i++)
    {
        txt_str << getEmployee(i)->getFirstName() << op << getEmployee(i)->getLastName() << op << getEmployee(i)->getSalary() << op << getEmployee(i)->getHiringYear << "\n";
    }

    txt_str.close();
}
