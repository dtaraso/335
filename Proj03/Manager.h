#ifndef MANAGER_H
#define MANAGER_H

#include "Employee.h"
#include <vector>

class Manager : public Employee {
protected:
	//Initializes Rank
	unsigned int mRank;

public:
	//Constructor
	Manager(const string &firstName, const string &lastName,
		const unsigned short &salary, const int &yearHired, 
		const int &rank, const unsigned int ID) :
		Employee(firstName, lastName, salary, yearHired, ID) {
		mRank = rank;
	}

	//Copy Constructor
	Manager(const Manager& CM) :Employee(CM) {
		mRank = CM.mRank;
	}

	//Assignment Operator
	Manager& operator = (const Manager& CM) {
		if (this != &CM) {
			mRank = CM.mRank;
		}
		return *this;
	}

	//Destructor
	~Manager() {
	}

	int getRank() {
		return mRank;
	}

	void setRank(const int &rank) {
		mRank = rank;
	}
	//leave print function for print visitor
	//Displays Employee aspects and department name of Manager
	/*
	virtual void print() {
		cout << "\t" << mFirstName << " " << mLastName << "\t Salary:" << mSalary << "\t Hiring Year:" << mHiringYear << "\t Rank:" << mRank<< "\t ID:" << mID;
	}
	*/
	virtual void Accept(Visitor*v) {
		v->VisitManager(this);
	};
};

#endif /* MANAGER_H */
