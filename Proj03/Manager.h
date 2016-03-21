#ifndef MANAGER_H
#define MANAGER_H

#include "Employee.h"
#include <vector>

class Manager : public Employee {
protected:
    //Initializes department name and vector of employees
	string mDeptName;
	vector<Employee*> mEmployees;
        unsigned int mRank;

public:
    //Constructor
	Manager(const string &firstName, const string &lastName,
		const unsigned short &salary, const tm &yearHired,
		const int &rank, const vector<Employee*> &group) :
		Employee(firstName, lastName, salary, yearHired, ID) {
		mEmployees = group;
		mDeptName = departName;
                mRank = rank;
	}

    //Copy Constructor
	CManager(const Manager& CM) :Employee(CM) {
		mDeptName = CM.mDeptName;
		mEmployees=CM.mEmployees;
                mRank = CM.mRank;
	}
        
    //Assignment Operator
	Manager& operator = (const Manager& CM) {
		if (this != &CM) {
			mDeptName = CM.mDeptName;
			mRank = CM.mRank;
		}
		return *this;
	}
        
    //Destructor
	~Manager() {
	}
	
    //Displays Employee aspects and department name of Manager
	virtual void DisplayEmployee(){
	Employee::DisplayEmployee();
	cout<<"\t"<<mDeptName << "\t" << mRank; 
	}
};

#endif /* MANAGER_H */


