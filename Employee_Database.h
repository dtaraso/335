/*
* File:   Employee_Database.h
* Author: Dasha
*
* Created on January 28, 2016, 8:45 PM
*/

#ifndef EMPLOYEE_DATABASE_H
#define	EMPLOYEE_DATABASE_H

#include "Employee.h"
#include "Manager.h"

class CDatabase : public CEmployee {
private:
	vector<CEmployee*> m_Group;
public:
	//Add Employee into database
	void AddRecord() {

	}
	//Print out Employees and the Employees they watch over
	void DisplayRecords() {

	}
};

#endif	/* EMPLOYEE_DATABASE_H */