#ifndef DIRECTOR_H
#define DIRECTOR_H

#include "employee.h"
#include <vector>
#include "abstractbuilder.h"
using namespace std;


class Director
{
protected:
    AbstractBuilder* m_ab;
public:
    Director();
    void setAbstractBuilder(AbstractBuilder*);
    void createFiles(vector<CEmployee*>);
};

#endif // DIRECTOR_H
