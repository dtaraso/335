#include "director.h"

Director::Director()
{

}

void Director::setAbstractBuilder(AbstractBuilder* ab) {
    m_ab = ab;
}

void Director::createFiles(vector<CEmployee*> emps) {
    m_ab->createFile(emps);
}
