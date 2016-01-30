/*
* File:   Employee.h
* Author: Daria Tarasova
*
* Created on January 28, 2016, 7:26 PM
*/

#ifndef EMPLOYEE_H
#define	EMPLOYEE_H

#include <iostream>
#include <string>

using namespace std;

class CEmployee {
protected:
	string m_FirstName;
	string m_LastName;
	unsigned short m_YearHired;
	unsigned short m_Salary;

public:
	CEmployee(const string firstName, const string lastName, 
		const unsigned short salary, const unsigned short yearHired) {
		m_FirstName = firstName;
		m_LastName = lastName;
		m_YearHired = yearHired;
		m_Salary = salary;
	}
	//Default Constructor
	CEmployee() {
		m_FirstName = "";
		m_LastName = "";
		m_YearHired = 0;
		m_Salary = 0;
	}
	//Copy Constructor
	CEmployee(const CEmployee &CE) {
		m_FirstName = CE.getFirstName();
		m_LastName = CE.getLastName();
		m_YearHired = CE.getYearHired();
		m_Salary = CE.getSalary();
	}
	//Assignment Operator
	//goes here

	string getFirstName() const {
		return m_FirstName;
	}

	string getLastName() const {
		return m_LastName;
	}

	unsigned short getYearHired() const {
		return m_YearHired;
	}

	unsigned short getSalary() const {
		return m_Salary;
	}

	void setFirstName(const string firstName) {
		m_FirstName = firstName;
	}

	void setLastName(const string lastName) {
		m_LastName = lastName;
	}

	void setYearHired(const unsigned short yearHired) {
		m_YearHired = yearHired;
	}

	void setSalary(const unsigned short salary) {
		m_Salary = salary;
	}

	virtual void DisplayEmployee() const {
		cout << m_FirstName << " " << m_LastName << ", Salary: " << m_Salary << "; Hiring Year: " << 
			m_YearHired<< endl;
	}

};

#endif	/* EMPLOYEE_H */
