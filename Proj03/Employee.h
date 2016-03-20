#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
#include <ctime>
#include <iostream>
using namespace std;

class Employee {
protected:
    //Initializes employee elements
	string mFirstName;
	string mLastName;
	unsigned int mSalary;
	tm mHiringYear;

public:
    //Constructor
	Employee(string firstName, string lastName, unsigned int salary, tm yearHired) :
		mFirstName(firstName), mLastName(lastName), mSalary(salary), mHiringYear(yearHired) {};

    //Copy Constructor
	Employee(const Employee& CE) {
		mFirstName = CE.mFirstName;
		mLastName = CE.mLastName;
		mSalary = CE.mSalary;
		mHiringYear = CE.mHiringYear;
	}

    //Assignment Operator
	Employee& operator = (const Employee& CE) {
		if (this != &CE) {
			mFirstName = CE.mFirstName;
			mLastName = CE.mLastName;
			mSalary = CE.mSalary;
			mHiringYear = CE.mHiringYear;
		}
		return *this;
	}

    //Destructor
	~Employee() {}

    //Prints elements of employees
	virtual void DisplayEmployee() {
		cout << mFirstName << " " << mLastName << "\t Salary:" << mSalary << "\t Hiring Year:" << mHiringYear.tm_year;
	}
    //returns first name
	string getFirstName() const {
		return mFirstName;
	}
    //returns last name
	string getLastName() const {
		return mLastName;
	}
    //returns year hired
	tm getYearHired() const {
		return mHiringYear;
	}
    //returns salary
	unsigned short getSalary() const {
		return mSalary;
	}
    //sets first name
	void setFirstName(const string firstName) {
		mFirstName = firstName;
	}
    //sets last name
	void setLastName(const string lastName) {
		mLastName = lastName;
	}
    //sets year hired
	void setYearHired(const tm yearHired) {
		mHiringYear = yearHired;
	}
    //sets salary
	void setSalary(const unsigned short salary) {
		mSalary = salary;
	}
};

#endif /* EMPLOYEE_H */