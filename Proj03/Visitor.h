/* 
 * File:   Visitor.h
 * Author: Dasha
 *
 * Created on March 20, 2016, 5:19 PM
 */

#ifndef VISITOR_H
#define	VISITOR_H

class Employee;
class Manager;
class Group;
class Department;

class Visitor {
public:
    virtual void VisitEmployee(Employee*)=0;
    virtual void VisitManager(Manager*)=0;
    virtual void VisitGroup(Group*)=0;
    virtual void VisitDepartment(Department*)=0;
};

#endif	/* VISITOR_H */

