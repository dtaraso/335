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

class PrintVisitor: public Visitor {
public:
        virtual void VisitGroup(Group* grp){
            grp->displayGroup;
        }
}

#endif	/* PRINTVISITOR_H */

