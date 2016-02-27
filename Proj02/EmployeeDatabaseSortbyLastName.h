/*
* File:   EmployeeDatabaseSortbyLastName.h
* Author: Dasha
*
* Created on February 26, 2016, 4:56 PM
*/

#ifndef EMPLOYEEDATABASESORTBYLASTNAME_H
#define	EMPLOYEEDATABASESORTBYLASTNAME_H
#include "EmployeeDatabaseSortable.h"

class EmployeeDatabaseSortByLastName : public EmployeeDatabaseSortable {
public:
	EmployeeDatabaseSortByLastName(vector <CEmployee*> employees) :
		EmployeeDatabaseSortable(employees) {};

	virtual bool smaller(int i, int j) const {
		if (getEmployee(i)->getFirstName() < getEmployee(j)->getFirstName())
			return true;
		else
			return false;
	}
};


#endif	/* EMPLOYEEDATABASESORTBYLASTNAME_H */
