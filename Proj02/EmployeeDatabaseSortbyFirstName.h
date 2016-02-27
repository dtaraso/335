/* 
 * File:   EmployeeDatabaseSortbyFirstName.h
 * Author: Dasha
 *
 * Created on February 26, 2016, 4:55 PM
 */

#ifndef EMPLOYEEDATABASESORTBYFIRSTNAME_H
#define	EMPLOYEEDATABASESORTBYFIRSTNAME_H
#include "EmployeeDatabaseSortable.h"

class EmployeeDatabaseSortByFirstName: public EmployeeDatabaseSortable {
    public: 
        EmployeeDatabaseSortByFirstName(vector <CEmployee*> employees):
    EmployeeDatabaseSortable(employees){};
    
        virtual bool smaller(int i, int j) const {
        if (getEmployee(i)->getFirstName() < getEmployee(j)->getFirstName())
            return true;
        else
            return false;
    }
};


#endif	/* EMPLOYEEDATABASESORTBYFIRSTNAME_H */
