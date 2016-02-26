
#ifndef CMANAGER_H
#define CMANAGER_H

#include "Employee.h"
#include <vector>

class CManager : public CEmployee{
protected:
    string mDeptName;
    //vector<CEmployee*> mEmployees;
    
public:
    CManager(string firstName, string lastName, unsigned int salary, tm YearHired, string dept):
    CEmployee(firstName,lastName,salary,YearHired) {
    mDeptName=dept;
    //mEmployees=employees;
}

CManager(const CManager& CM):CEmployee(CM) {
    mDeptName=CM.mDeptName;
    //mEmployees=CM.mEmployees;
}
CManager& operator = (const CManager& CM){
    if(this!=&CM){
        mDeptName=CM.mDeptName;
        //mEmployees=CM.mEmployees;
        //CEmployee::operator =(CM);
    }
    return *this;
}
~CManager() {
}
/*
virtual void DisplayEmployee(){
    CEmployee::DisplayEmployee();
    cout<<"\t"<<mDeptName<<"\t Subordinates:"<<mEmployees.size()<<"\n";
    for(int i=0;i<mEmployees.size();i++){
        cout<<"\tSubordinates:";
        mEmployees[i]->DisplayEmployee();
    }
}*/
};

#endif /* CMANAGER_H */

