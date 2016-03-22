/*
* File:   SumsalaryVisitor.h
* Author: Dasha
*
* Created on March 20, 2016, 5:01 PM
*/

#ifndef SUMSALARYVISITOR_H
#define	SUMSALARYVISITOR_H

#include "Employee.h"
#include "Visitor.h"

class SumsalaryVisitor: public Visitor {
public:
	unsigned int mSum;
public:
	double getTotalSalary() { return mSum; }

	virtual void VisitEmployee(Employee* emp) {
		mSum += (emp->getSalary());
	}

	double restTotalSalary() {
		mSum = 0;
	}

	/*
	virtual void VisitEmployee(Employee* emp) {

	}
	virtual void VisitManager(Manager* man) {

	}
	virtual void VisitGroup(Group* grp) {

	}
	virtual void VisitDepartment(Department* dep) {

	}
	*/
};

#endif	/* SUMSALARYVISITOR_H */
