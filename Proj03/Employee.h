#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
#include <ctime>
#include <iostream>
#include "Unit.h"
using namespace std;

class Employee : public Unit {
protected:
	//Initializes employee elements
	string mFirstName;
	string mLastName;
	unsigned int mSalary;
	int mHiringYear;
	unsigned int mID;

public:
	//Constructor
	Employee(string firstName, string lastName, unsigned int salary, int yearHired, unsigned int ID) :
		mFirstName(firstName), mLastName(lastName), mSalary(salary), mHiringYear(yearHired), mID(ID) {};

	//Copy Constructor
	Employee(const Employee& CE) {
		mFirstName = CE.mFirstName;
		mLastName = CE.mLastName;
		mSalary = CE.mSalary;
		mHiringYear = CE.mHiringYear;
		mID = CE.mID;
	}

	//Assignment Operator
	Employee& operator = (const Employee& CE) {
		if (this != &CE) {
			mFirstName = CE.mFirstName;
			mLastName = CE.mLastName;
			mSalary = CE.mSalary;
			mHiringYear = CE.mHiringYear;
			mID = CE.mID;
		}
		return *this;
	}

	//Destructor
	~Employee() {}

	//returns first name
	string getFirstName() const {
		return mFirstName;
	}
	//returns last name
	string getLastName() const {
		return mLastName;
	}
	//returns year hired
	int getYearHired() const {
		return mHiringYear;
	}

	//returns salary
	unsigned short getSalary() const {
		return mSalary;
	}

	//returns ID
	unsigned int getID() const {
		return mID;
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
	void setYearHired(const int yearHired) {
		mHiringYear = yearHired;
	}
	//sets salary
	void setSalary(const unsigned short salary) {
		mSalary = salary;
	}

	void setID(const unsigned int ID) {
		mID = ID;
	}
	//leave print function for print visitor
	/*
	virtual void print() {
		cout << "\t\t" << mFirstName << " " << mLastName << "\t Salary:" << mSalary << "\t Hiring Year:" << mHiringYear << "\t ID:" << mID;
	};
	*/

	virtual void Accept(Visitor*v) {
		v->VisitEmployee(this);
	};
};

#endif /* EMPLOYEE_H */
