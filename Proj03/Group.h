/*
* File:   Group.h
* Author: Dasha
*
* Created on March 20, 2016, 5:01 PM
*/

#ifndef GROUP_H
#define	GROUP_H
#include "Unit.h"
#include <string>
#include <vector>
#include "Employee.h"

class Group: public Unit {
public:
	string mGroupName;
	vector<Employee*> mEmployees;

	//constructor
	Group(string groupname) : mGroupName(groupname) {};

	//copy constructor
	Group(const Group& group) {
		mGroupName = group.mGroupName;
		mEmployees = group.mEmployees;
	}

	//Assignment Operator
	Group& operator = (const Group& group) {
		if (this != &group) {
			mGroupName = group.mGroupName;
			mEmployees = group.mEmployees;
		}
		return *this;
	}

	//destructor
	~Group() {}

	string getGroupName() {
		return mGroupName;
	}

	string setGroupName(const string& gname) {
		mGroupName = gname;
	}

	void addGroupMember(Employee* group) {
		mEmployees.push_back(group);
	}

	virtual void print() {
		cout << "Group Name: "<< mGroupName << endl;
		for (auto member : mEmployees) {
			member->print();
		}

	}

	virtual void Accept(Visitor* v) {
		cout << endl;
	}
};



#endif	/* GROUP_H */
