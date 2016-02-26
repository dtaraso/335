/* 
 * File:   EmployeeDatabaseSortbyHireYear.h
 * Author: Dasha
 *
 * Created on February 26, 2016, 4:54 PM
 */

#ifndef EMPLOYEEDATABASESORTBYHIREYEAR_H
#define	EMPLOYEEDATABASESORTBYHIREYEAR_H
#include "EmployeeDatabaseSortable.h"
#include <iostream>

using namespace std;

class EmployeeDatabaseSortBySalary: public EmployeeDatabaseSortable {
public:
    //EmployeeDatabaseSortBySalary(vector <Student*> studentVector):
    //StudentVector(studentVector){};
    
    virtual bool smaller(int i, int j) const {
        if (getStudent(i)->getGPA() < getStudent(j)->getGPA())
            return true;
        else
            return false;
    }
    
    
};


#endif	/* EMPLOYEEDATABASESORTBYHIREYEAR_H */

