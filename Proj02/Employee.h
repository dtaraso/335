
#ifndef CEMPLOYEE_H
#define CEMPLOYEE_H

#include <string>
#include <ctime>
#include <iostream>
using namespace std;

class CEmployee {
protected:
    string mFirstName;
    string mLastName;
    unsigned int mSalary;
    tm mHiringYear;
    
public:
    CEmployee(string firstName, string lastName, unsigned int salary, tm yearHired):
    mFirstName(firstName),mLastName(lastName),mSalary(salary),mHiringYear(yearHired){};
    
    CEmployee(const CEmployee& CE) {
    mFirstName=CE.mFirstName;
    mLastName=CE.mLastName;
    mSalary=CE.mSalary;
    mHiringYear=CE.mHiringYear;
}

CEmployee& operator = (const CEmployee& CE){
    if(this!=&CE){
        mFirstName=CE.mFirstName;
        mLastName=CE.mLastName;
        mSalary=CE.mSalary;
        mHiringYear=CE.mHiringYear;
    }
    return *this;
}

~CEmployee() {}

virtual void DisplayEmployee(){
    cout<<mFirstName<<" "<<mLastName<<"\t Salary:"<<mSalary<<"\t Hiring Year:"<<mHiringYear.tm_year;
}
};

#endif /* CEMPLOYEE_H */

