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

class CDatabase{
private:
	vector<CEmployee*> m_Employees;
public:
	CDatabase(){}
	CDatabase(vector<CEmployee*> employees)
	{
		m_Employees = employees;
	}

	//copy constructor
	CDatabase( CDatabase &db)
	{
		if (this != &db)
		{
			for (auto E : db.m_Employees)
			{
				//feel like this might cause issues since
				//the pointer is probably getting copied
				m_Employees.push_back(E);
			}
		}
	}
	//assignment operator
	CDatabase& operator=(CDatabase &db)
	{
		for (auto E : db.m_Employees)
		{
			m_Employees.push_back(E);
		}
	}
	

	//Add Employee into database
	void AddRecord(CEmployee *emp) {
		m_Employees.push_back(emp);
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