/*
* File:   Manager.h
* Author: Daria Tarasova
*
* Created on January 28, 2016, 7:26 PM
*/

#ifndef MANAGER_H
#define	MANAGER_H

#include "Employee.h"
#include <vector>
using namespace std;

class CManager : public CEmployee {
protected:
	vector<CEmployee*> m_Group;
	string m_DepartmentName;

public:
	CManager(const string &firstName, const string &lastName,
		const unsigned short &salary, const tm &yearHired,
		const string &departName, const vector<CEmployee*> &group) :
		CEmployee(firstName, lastName, salary, yearHired) {
		;
		m_Group = group;
		m_DepartmentName = departName;
	}
	//Default Constructor
	CManager() :CEmployee() {
		m_DepartmentName = "";
	}
	//Copy Constructor
	CManager(const CManager &CM) {
		m_FirstName = CM.getFirstName();
		m_LastName = CM.getLastName();
		m_YearHired = CM.getYearHired();
		m_Salary = CM.getSalary();
		m_DepartmentName = CM.getDepartment();
	}
	//Assignment Operator
	//goes here

	string getDepartment() const {
		return m_DepartmentName;
	}

	void setDepartment(const string departName) {
		m_DepartmentName = departName;
	}
	//Manager still needs to display employees *Fixed*
	//need number of sub ordinates and need to fix formatting
	//Displays Manager Imformation and their subordinates' info
	virtual void DisplayEmployee() const {
		cout << m_FirstName << " " << m_LastName << ", Salary: " << m_Salary << "; Hiring Year: " <<
			m_YearHired.tm_year << " Department: " << m_DepartmentName << endl;
		for (auto E : m_Group)
		{
			cout << '\t';
			cout << m_FirstName << " " << m_LastName << ", Salary: " << m_Salary << "; Hiring Year: " <<
				m_YearHired.tm_year << " Department: " << m_DepartmentName << endl;
		}
	}
};

#endif	/* MANAGER_H */