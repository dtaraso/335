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
protected:
	unsigned int mSum = 0;
public:
	unsigned int getTotalSalary() { return mSum; }

	void restTotalSalary() {
		mSum = 0;
	}

	
	virtual void VisitEmployee(Employee* emp) {
		mSum += (emp->getSalary());
	}
	virtual void VisitManager(Manager* man) {
		mSum += (man->getSalary());
	}
	virtual void VisitGroup(Group* grp) {
		SumsalaryVisitor sv;
		for (auto unit : grp->getEmployees()) {
			unit->Accept(&sv);
		}
		mSum += sv.getTotalSalary();
	}
	virtual void VisitDepartment(Department* dep) {
		SumsalaryVisitor sv;
		for (auto unit : dep->getSubDepartments()) {
			unit->Accept(&sv);
		}
		mSum += sv.getTotalSalary();
	}
	
};

#endif	/* SUMSALARYVISITOR_H */
