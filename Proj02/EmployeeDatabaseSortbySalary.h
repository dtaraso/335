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

class EmployeeDatabaseSortBySalary : public EmployeeDatabaseSortable {
public:
	EmployeeDatabaseSortBySalary(vector <CEmployee*> employees):
	EmployeeDatabaseSortable(employees){};

	virtual bool smaller(int i, int j) const {
		if (getEmployee(i)->getSalary() < getEmployee(j)->getSalary())
			return true;
		else
			return false;
	}


};


#endif	/* EMPLOYEEDATABASESORTBYSALARY_H */
