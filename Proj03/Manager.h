#ifndef MANAGER_H
#define MANAGER_H

#include "Employee.h"
#include <vector>

class Manager : public Employee {
protected:
    //Initializes department name and vector of employees
	string mDeptName;
	vector<Employee*> mEmployees;

public:
    //Constructor
	Manager(const string &firstName, const string &lastName,
		const unsigned short &salary, const tm &yearHired,
		const string &departName, const vector<Employee*> &group) :
		Employee(firstName, lastName, salary, yearHired) {
		mEmployees = group;
		mDeptName = departName;
	}

    //Copy Constructor
	CManager(const Manager& CM) :Employee(CM) {
		mDeptName = CM.mDeptName;
		mEmployees=CM.mEmployees;
	}
        
    //Assignment Operator
	Manager& operator = (const Manager& CM) {
		if (this != &CM) {
			mDeptName = CM.mDeptName;
			//mEmployees=CM.mEmployees;
			//CEmployee::operator =(CM);
		}
		return *this;
	}
        
    //Destructor
	~Manager() {
	}
	
    //Displays Employee aspects and department name of Manager
	virtual void DisplayEmployee(){
	Employee::DisplayEmployee();
	cout<<"\t"<<mDeptName; //<<"\t Subordinates:"<<mEmployees.size();
	//for(int i=0;i<mEmployees.size();i++){
	//cout<<"\tSubordinates:";
	//mEmployees[i]->DisplayEmployee();
	//}
	}
};

#endif /* MANAGER_H */


