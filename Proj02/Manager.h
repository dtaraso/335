#ifndef CMANAGER_H
#define CMANAGER_H

#include "Employee.h"
#include <vector>

class CManager : public CEmployee {
protected:
	string mDeptName;
	vector<CEmployee*> mEmployees;

public:
	CManager(const string &firstName, const string &lastName,
		const unsigned short &salary, const tm &yearHired,
		const string &departName, const vector<CEmployee*> &group) :
		CEmployee(firstName, lastName, salary, yearHired) {
		mEmployees = group;
		mDeptName = departName;
	}

	CManager(const CManager& CM) :CEmployee(CM) {
		mDeptName = CM.mDeptName;
		mEmployees=CM.mEmployees;
	}
	CManager& operator = (const CManager& CM) {
		if (this != &CM) {
			mDeptName = CM.mDeptName;
			//mEmployees=CM.mEmployees;
			//CEmployee::operator =(CM);
		}
		return *this;
	}
	~CManager() {
	}
	
	virtual void DisplayEmployee(){
	CEmployee::DisplayEmployee();
	cout<<"\t"<<mDeptName<<"\t Subordinates:"<<mEmployees.size();
	for(int i=0;i<mEmployees.size();i++){
	cout<<"\tSubordinates:";
	mEmployees[i]->DisplayEmployee();
	}
	}
};

#endif /* CMANAGER_H */
