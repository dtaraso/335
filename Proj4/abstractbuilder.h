#ifndef ABSTRACTBUILDER_H
#define ABSTRACTBUILDER_H
#include <string>
#include <vector>
#include "employee.h"
using namespace std;

class AbstractBuilder
{
public:
    AbstractBuilder();
    virtual string getFileName() = 0;
    virtual string getOperand() = 0;
    void createFile(vector<CEmployee*> emps);
};

#endif // ABSTRACTBUILDER_H
