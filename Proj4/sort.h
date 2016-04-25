#ifndef SORT_H
#define SORT_H
#include "employee.h"
//used for sort algorithm in main window
bool fnameAscending(const CEmployee *e1, const CEmployee *e2)
{
   return e1->getFirstName() < e2->getFirstName();
}
bool fnameDescending(const CEmployee *e1, const CEmployee *e2)
{
   return e1->getFirstName() > e2->getFirstName();
}
bool lnameAscending(const CEmployee *e1, const CEmployee *e2)
{
   return e1->getLastName() < e2->getLastName();
}
bool lnameDescending(const CEmployee *e1, const CEmployee *e2)
{
   return e1->getLastName() > e2->getLastName();
}
bool salaryAscending(const CEmployee *e1, const CEmployee *e2)
{
   return e1->getSalary() < e2->getSalary();
}
bool salaryDescending(const CEmployee *e1, const CEmployee *e2)
{
   return e1->getSalary() > e2->getSalary();
}
bool yearAscending(const CEmployee *e1, const CEmployee *e2)
{
   return (e1->getYearHired() < e2->getYearHired());
}
bool yearDescending(const CEmployee *e1, const CEmployee *e2)
{
   return (e1->getYearHired() > e2->getYearHired());
}
#endif // SORT_H
