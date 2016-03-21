/* 
 * File:   SumsalaryVisitor.h
 * Author: Dasha
 *
 * Created on March 20, 2016, 5:01 PM
 */

#ifndef SUMSALARYVISITOR_H
#define	SUMSALARYVISITOR_H

#include "Employee.h"

class SumsalaryVisitor: public Visitor {
public:
    unsigned int mSum;
public:
    double getTotalSalary() {return mSum;}
    
    virtual void VisitEmployee(Employee* emp){
        mSum += (emp->getSalary());
    }
    
    double restTotalSalary() {
        mSum = 0;
    }
};

#endif	/* SUMSALARYVISITOR_H */

