/* 
 * File:   EmployeeDatabaseSortbyLastName.h
 * Author: Dasha
 *
 * Created on February 26, 2016, 4:56 PM
 */

#ifndef EMPLOYEEDATABASESORTBYLASTNAME_H
#define	EMPLOYEEDATABASESORTBYLASTNAME_H
#include "EmployeeDatabaseSortable.h"

class EmployeeDatabaseSortbyLastName: public EmployeeDatabaseSortable {
    public: 
        EmployeeDatabaseSortbyLastName(vector <Student*> studentVector):
    StudentVector(studentVector){};
    
        virtual bool smaller(int i, int j) const {
        if (getStudent(i)->getFirstName() < getStudent(j)->getFirstName())
            return true;
        else
            return false;
    }
};


#endif	/* EMPLOYEEDATABASESORTBYLASTNAME_H */

