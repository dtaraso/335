
#include <cstdlib>
#include <iostream>
#include "Manager.h"
#include "Employee.h"
#include "Employee_Database.h"
#include "SortableVector.h"
#include "BubbleSortTemplate.h"
#include "BubbleSortDecreasing.h"
#include "BubbleSortIncreasing.h"

using namespace std;

int main(int argc, char** argv) {

    tm hiringYear;
    hiringYear.tm_year=2000;
    CManager mang("Tom","Cruise",40000, hiringYear, "Sales");
    CManager mang1("Alice","Cooper",45000, hiringYear, "Human Resources");

    //Add records to database
    vector<CEmployee*> allEmp;
    CDatabase emp_data(allEmp);
    hiringYear.tm_year=2011;
    emp_data.AddRecord(new CEmployee("\nJohn","Smith1",10000,hiringYear));
    hiringYear.tm_year=2012;
    emp_data.AddRecord(new CEmployee("\nJohn","Smith2",20000,hiringYear));
    hiringYear.tm_year=2013;
    emp_data.AddRecord(new CEmployee("\nJohn","Smith2",30000,hiringYear));
    hiringYear.tm_year=2000;
    emp_data.AddRecord(new CManager("\nTom","Cruise",40000,hiringYear, "Sales"));
    hiringYear.tm_year=2010;
    emp_data.AddRecord(new CEmployee("\nJohn","Doe1",15000,hiringYear));
    hiringYear.tm_year=2011;
    emp_data.AddRecord(new CEmployee("\nJohn","Doe2",25000,hiringYear));
    hiringYear.tm_year=2012;
    emp_data.AddRecord(new CEmployee("\nJohn","Doe3",35000,hiringYear));
    hiringYear.tm_year=2000;
    emp_data.AddRecord(new CManager("\nAlice","Cooper",45000,hiringYear, "Human Resources"));
    
    //display all records
    emp_data.DisplayRecords();
    
    BubbleSort bs;
    EmployeeDatabaseSortByFirstName svSortedByFirstName(emp_data);
    bs.sortIncreasing(&svSortedByFirstName);
        
    bs.sortDecreasing(&svSortedByFirstName);
    
    EmployeeDatabaseSortByLastName svSortedByLastName(emp_data);
    bs.sortIncreasing(&svSortedByLastName);
    
    bs.sortDecreasing(&svSortedByLastName);
    
    EmployeeDatabaseSortBySalary svSortedBySalary(emp_data);
    bs.sortIncreasing(&svSortedBySalary);
    
    bs.sortDecreasing(&svSortedBySalary);
    
    EmployeeDatabaseSortByHireYear svSortedByHireYear(emp_data);
    bs.sortIncreasing(&svSortedByHireYear);
    
    bs.sortDecreasing(&svSortedByHireYear);
    
    
    return 0;
}

