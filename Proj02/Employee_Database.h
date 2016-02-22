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

//Database Class
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
	CDatabase( CDatabase &CD)
	{
            //Checks if new object is equal to the old
            if(this != &CD)
            {
                //Goes through CD and pushes back employees
		for (auto E : CD.m_Employees)
		{
			//Goes through CD and pushes back employees
			m_Employees.push_back(E);
		}
            }
	}
	// Assignment Operator
	CDatabase operator=( CDatabase &CD) {
            //Checks if new object is equal to the old
            if(this != &CD)
            {
            //Goes through CD and pushes back employees
            for (auto E : CD.m_Employees)
		{
			m_Employees.push_back(E);
		}
            }
            return *this;
        }
        
        ~CDatabase () {
            delete &CD;
        }

	//Add Employee into database
	void AddRecord(CEmployee *CE) {
		m_Employees.push_back(CE);
	}
	//displays all employees and their subordinates
	void DisplayRecords() {
            //Goes through Employees and displays information
		for (auto E : m_Employees) {
			E->DisplayEmployee();
			cout << endl;
		}
	}
};

#endif	/* EMPLOYEE_DATABASE_H */