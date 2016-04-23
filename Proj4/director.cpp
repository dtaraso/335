#include "director.h"

Director::Director()
{
protected:
    AbstractBuilder* m_ab;
}

void setAbstractBuilder(AbstractBuilder* ab) {
    m_ab = ab;
}

void createFiles(vector<Employee*> emps) {
    m_ab->createFile(emps);
}
