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
using namespace std;

//removed inheritance from employee here
class CDatabase{
private:
	vector<CEmployee*> m_Employees;
public:
	//Not sure if I need this default constructor
	CDatabase(){}
	CDatabase(vector<CEmployee*> employees)
	{
		m_Employees = employees;
	}

	//copy constructor
	CDatabase( CDatabase &CD)
	{
		for (auto E : CD.m_Employees)
		{
			//feel like this might cause issues since
			//the pointer is probably getting copied
			m_Employees.push_back(E);
		}
	}
	//need assignment operator function
	//
	

	//Add Employee into database
	void AddRecord(CEmployee *CE) {
		m_Employees.push_back(CE);
	}
	//Print out Employees and the Employees they watch over
	//displays all employees and their subordinates
	void DisplayRecords() {
		for (auto E : m_Employees) {
			E->DisplayEmployee();
			cout << endl;
		}
	}
};

#endif	/* EMPLOYEE_DATABASE_H */