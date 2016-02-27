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

class EmployeeDatabaseSortByHireYear : public EmployeeDatabaseSortable {
public:
	EmployeeDatabaseSortByHireYear(vector <CEmployee*> employees):
	EmployeeDatabaseSortable(employees){};

	virtual bool smaller(int i, int j) const {
		if (getEmployee(i)->getYearHired().tm_year < getEmployee(j)->getYearHired().tm_year)
			return true;
		else
			return false;
	}


};


#endif	/* EMPLOYEEDATABASESORTBYHIREYEAR_H */
