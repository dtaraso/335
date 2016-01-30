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
	/*
	CDatabase( CDatabase &CD)
	{
		vector<CEmployee>;
	}
	*/
	//Add Employee into database
	void AddRecord(CEmployee *CE) {
		m_Employees.push_back(CE);
	}
	//Print out Employees and the Employees they watch over
	void DisplayRecords() {
		for (auto E : m_Employees) {
			E->DisplayEmployee();
			cout << endl;
		}
	}
};

#endif	/* EMPLOYEE_DATABASE_H */