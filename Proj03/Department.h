/*
* File:   Department.h
* Author: Dasha
*
* Created on March 20, 2016, 5:01 PM
*/

#ifndef DEPARTMENT_H
#define	DEPARTMENT_H

#include <string>
#include <vector>
#include "Unit.h"

class Department: public Unit {
protected:
	string mDeptName;
	vector<Unit*> mSubDepartments;
public:
	//constructor
	Department(string name) : mDeptName(name) {};

	//copy constructor
	Department(const Department& dept) {
		mDeptName = dept.mDeptName;
		mSubDepartments = dept.mSubDepartments;
	}

	//Assignment Operator
	Department& operator = (const Department& dept) {
		if (this != &dept) {
			mDeptName = dept.mDeptName;
			mSubDepartments = dept.mSubDepartments;
		}
		return *this;
	}

	//destructor
	~Department() {}

	string getDeptName() const {
		return mDeptName;
	}

	void setDeptName(const string &deptname) {
		mDeptName = deptname;
	}

	void addDepartmentMember(Unit* dept) {
		mSubDepartments.push_back(dept);
	}

	vector<Unit*> getSubDepartments() const{
		return mSubDepartments;
	}

	void setSubDepartments(vector<Unit*> &subDepts) {
		mSubDepartments = subDepts;
	}
	//leave print function for print visitor
	/*
	virtual void print() {
		cout << "Departmnet Name: " << mDeptName << endl;
		for (auto dept : mSubDepartments) {
			dept->print();
		}
	}
	*/

	virtual void Accept(Visitor* v) {
		v->VisitDepartment(this);
	}

};


#endif	/* DEPARTMENT_H */
