/* 
 * File:   EmployeeDatabaseSortbySalary.h
 * Author: Dasha
 *
 * Created on February 26, 2016, 4:51 PM
 */

#ifndef EMPLOYEEDATABASESORTBYSALARY_H
#define	EMPLOYEEDATABASESORTBYSALARY_H
#include "EmployeeDatabaseSortable.h"
#include <iostream>

using namespace std;

class EmployeeDatabaseSortBySalary: public EmployeeDatabaseSortable {
public:
    //StudentVectorSortByGPA(vector <Student*> studentVector):
    //StudentVector(studentVector){};
    
    virtual bool smaller(int i, int j) const {
        if (getStudent(i)->getGPA() < getStudent(j)->getGPA())
            return true;
        else
            return false;
    }
    
    
};


#endif	/* EMPLOYEEDATABASESORTBYSALARY_H */

