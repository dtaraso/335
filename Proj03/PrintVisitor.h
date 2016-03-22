/*
* File:   PrintVisitor.h
* Author: Dasha
*
* Created on March 20, 2016, 5:01 PM
*/

#ifndef PRINTVISITOR_H
#define	PRINTVISITOR_H

#include "Employee.h"
#include "Manager.h"
#include "Group.h"
#include "Department.h"

class PrintVisitor : public Visitor {
public:
	/*
	virtual void VisitGroup(Group* grp) {
		grp->print();
	}
	*/
	
	virtual void VisitEmployee(Employee* emp) {
		cout << "\t\t" << emp->getFirstName() << " " << emp->getLastName() << " Salary:" << emp->getSalary() << " Hiring Year:" << emp->getYearHired() << " ID:" << emp->getID()<< endl;
	}
	virtual void VisitManager(Manager* man) {
		cout << "\t" << man->getFirstName() << " " << man->getLastName() << " Salary:" << man->getSalary() << " Hiring Year:" << man->getYearHired() << " Rank:" << man->getRank() << " ID:" << man->getID() << endl;
	}
	virtual void VisitGroup(Group* grp) {
		PrintVisitor pv;
		cout << "Group Name: " << grp->getGroupName() << endl;
		for (auto member : grp->getEmployees()) {
			member->Accept(&pv);
		}

	}
	virtual void VisitDepartment(Department* dep) {
		PrintVisitor pv;
		cout << "Dept Name: " << dep->getDeptName() << endl;
		for (auto department : dep->getSubDepartments()) {
			department->Accept(&pv);
		}
	}
	
};

#endif	/*PRINTVISITOR_H*/
