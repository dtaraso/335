#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <iostream>
#include <string>
using namespace std;

class CEmployee{
    protected:
        string m_FirstName;
        string m_LastName;
        int m_YearHired;
        int m_Salary;

    public:
            CEmployee(const string &firstName, const string &lastName,
            const int &salary, const int &yearHired) {
            m_FirstName = firstName;
            m_LastName = lastName;
            m_YearHired = yearHired;
            m_Salary = salary;
        }
        //Default Constructor
        CEmployee() {
            m_FirstName = "first";
            m_LastName = "last";
            m_YearHired = 0001;
            m_Salary = 0;
        }

        //Copy Constructor
        CEmployee(const CEmployee &CE) {
                if(this != &CE)
                {
                    m_FirstName = CE.getFirstName();
                    m_LastName = CE.getLastName();
                    m_YearHired = CE.getYearHired();
                    m_Salary = CE.getSalary();
                }
        }
        //Assignment Operator
        CEmployee operator=(const CEmployee &CE) {
                //Checks if new object is equal to the old
                if (this != &CE)
                {
                    m_FirstName = CE.getFirstName();
            m_LastName = CE.getLastName();
            m_YearHired = CE.getYearHired();
            m_Salary = CE.getSalary();
                }
                return *this;
            }
            ~CEmployee() {
            }
        string getFirstName() const {
            return m_FirstName;
        }

        string getLastName() const {
            return m_LastName;
        }

        int getYearHired() const {
            return m_YearHired;
        }

        int getSalary() const {
            return m_Salary;
        }

        void setFirstName(const string firstName) {
            m_FirstName = firstName;
        }

        void setLastName(const string lastName) {
            m_LastName = lastName;
        }

        void setYearHired(const int yearHired) {
            m_YearHired = yearHired;
        }

        void setSalary(const int salary) {
            m_Salary = salary;
        }
};


#endif // EMPLOYEE_H
