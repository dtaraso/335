/* 
 * File:   Manager.h
 * Author: Daria Tarasova
 *
 * Created on January 28, 2016, 7:26 PM
 */

#ifndef MANAGER_H
#define	MANAGER_H

#include "Employee.h"
#include <vector>

class CManager: public CEmployee {
protected:
    vector<CEmployee*> m_Group;
    string m_DepartmentName;
    
public:
    CManager(const string& firstName, const string& lastName, const unsigned short& yearHired, const unsigned short& salary, const vector<CEmployee*> group, const string departName):CEmployee(firstName, lastName, yearHired, salary){;
        m_Group = group;
        m_DepartmentName = departName;
    }
    
    CManager() {
        
    }
    
    string getDepartment() const {
        return m_DepartmentName;
    }
    
    void setDepartment(const string departName){
        m_DepartmentName=departName;
    }
    
    virtual void print () const {
        cout << m_FirstName << " " << m_LastName << ": " << m_YearHired <<","<< m_Salary << m_Group << endl;
    }
};

#endif	/* MANAGER_H */

