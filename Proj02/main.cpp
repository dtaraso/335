
#include <cstdlib>
#include <iostream>
#include "Manager.h"
#include "Employee.h"
#include "Employee_Database.h"
#include "SortableVector.h"
#include "BubbleSortTemplate.h"
#include "BubbleSortDecreasing.h"
#include "BubbleSortIncreasing.h"
#include "EmployeeDatabaseSortable.h"
#include "EmployeeDatabaseSortbyFirstName.h"
#include "EmployeeDatabaseSortbyHireYear.h"
#include "EmployeeDatabaseSortbyLastName.h"
#include "EmployeeDatabaseSortbySalary.h"

using namespace std;

int main(int argc, char** argv) {

    tm hiringYear;
    hiringYear.tm_year=2000;
	vector<CEmployee*> emps;
    CManager mang("Tom","Cruise",40000, hiringYear, "Sales", emps);
    CManager mang1("Alice","Cooper",45000, hiringYear, "Human Resources", emps);

    //Add records to database
	/*
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
	*/
	vector<CEmployee*> allEmp;
	hiringYear.tm_year = 2011;
	allEmp.push_back(new CEmployee("\nJohn", "Smith1", 10000, hiringYear));
	hiringYear.tm_year = 2012;
	allEmp.push_back(new CEmployee("\nMike", "Smith2", 20000, hiringYear));
	hiringYear.tm_year = 2013;
	allEmp.push_back(new CEmployee("\nSam", "Smith3", 30000, hiringYear));
	hiringYear.tm_year = 2000;
	allEmp.push_back(new CManager("\nTom", "Cruise", 40000, hiringYear, "Sales", emps));
	hiringYear.tm_year = 2010;
	allEmp.push_back(new CEmployee("\nBob", "Doe1", 15000, hiringYear));
	hiringYear.tm_year = 2011;
	allEmp.push_back(new CEmployee("\nBill", "Doe2", 25000, hiringYear));
	hiringYear.tm_year = 2012;
	allEmp.push_back(new CEmployee("\nFrank", "Doe3", 35000, hiringYear));
	hiringYear.tm_year = 2000;
	allEmp.push_back(new CManager("\nAlice", "Cooper", 45000, hiringYear, "Human Resources", emps));
	CDatabase emp_data(allEmp);
    //display all records
	cout << "*********************************Unsorted*******************************************\n" << endl;
    emp_data.DisplayRecords();
	
    BubbleSortIncreasing bsInc;
	BubbleSortDecreasing bsDec;
    EmployeeDatabaseSortByFirstName svSortedByFirstName(allEmp);
	cout << "\n\n***************************Sort By First Name Inc*******************************\n" << endl;
    bsInc.sort(&svSortedByFirstName);
	svSortedByFirstName.DisplayRecords();
	cout << "\n\n***************************Sort By First Name Dec*******************************\n" << endl;
    bsDec.sort(&svSortedByFirstName);
	svSortedByFirstName.DisplayRecords();
    
	
    EmployeeDatabaseSortByLastName svSortedByLastName(allEmp);
	cout << "\n\n***************************Sort By Last Name Inc*******************************\n" << endl;
    bsInc.sort(&svSortedByLastName);
	svSortedByLastName.DisplayRecords();
	cout << "\n\n***************************Sort By Last Name Dec*******************************\n" << endl;
    bsDec.sort(&svSortedByLastName);
	svSortedByLastName.DisplayRecords();

	
    EmployeeDatabaseSortBySalary svSortedBySalary(allEmp);
	cout << "\n\n***************************Sort By Salary Inc*******************************\n" << endl;
    bsInc.sort(&svSortedBySalary);
	svSortedBySalary.DisplayRecords();
	cout << "\n\n***************************Sort By Salary Dec*******************************\n" << endl;
    bsDec.sort(&svSortedBySalary);
	svSortedBySalary.DisplayRecords();
    
	
    EmployeeDatabaseSortByHireYear svSortedByHireYear(allEmp);
	cout << "\n\n***************************Sort By Hire Year Inc*******************************\n" << endl;
    bsInc.sort(&svSortedByHireYear);
	svSortedByHireYear.DisplayRecords();
	cout << "\n\n***************************Sort By Hire Year Dec*******************************\n" << endl;
    bsDec.sort(&svSortedByHireYear);
	svSortedByHireYear.DisplayRecords();

	cout << "\n****************************************************************************" << endl;

    
    return 0;
}
