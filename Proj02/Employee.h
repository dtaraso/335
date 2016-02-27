#ifndef CEMPLOYEE_H
#define CEMPLOYEE_H

#include <string>
#include <ctime>
#include <iostream>
using namespace std;

class CEmployee {
protected:
	string mFirstName;
	string mLastName;
	unsigned int mSalary;
	tm mHiringYear;

public:
	CEmployee(string firstName, string lastName, unsigned int salary, tm yearHired) :
		mFirstName(firstName), mLastName(lastName), mSalary(salary), mHiringYear(yearHired) {};

	CEmployee(const CEmployee& CE) {
		mFirstName = CE.mFirstName;
		mLastName = CE.mLastName;
		mSalary = CE.mSalary;
		mHiringYear = CE.mHiringYear;
	}

	CEmployee& operator = (const CEmployee& CE) {
		if (this != &CE) {
			mFirstName = CE.mFirstName;
			mLastName = CE.mLastName;
			mSalary = CE.mSalary;
			mHiringYear = CE.mHiringYear;
		}
		return *this;
	}

	~CEmployee() {}

	virtual void DisplayEmployee() {
		cout << mFirstName << " " << mLastName << "\t Salary:" << mSalary << "\t Hiring Year:" << mHiringYear.tm_year;
	}
	string getFirstName() const {
		return mFirstName;
	}

	string getLastName() const {
		return mLastName;
	}

	tm getYearHired() const {
		return mHiringYear;
	}

	unsigned short getSalary() const {
		return mSalary;
	}

	void setFirstName(const string firstName) {
		mFirstName = firstName;
	}

	void setLastName(const string lastName) {
		mLastName = lastName;
	}

	void setYearHired(const tm yearHired) {
		mHiringYear = yearHired;
	}

	void setSalary(const unsigned short salary) {
		mSalary = salary;
	}
};

#endif /* CEMPLOYEE_H */