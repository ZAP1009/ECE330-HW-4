#include <iostream>
#include "salariedEmployee.h"

SalariedEmployee::SalariedEmployee(std::string &lastName, std::string &firstName, std::string &middleInitial, float monthlySalary, long idNum, int deptCode, float timeFraction):
Employee(idNum,lastName,firstName, middleInitial, deptCode), _monthlySalary{monthlySalary},_timeFraction{timeFraction} { }

SalariedEmployee::~SalariedEmployee(){ }	

SalariedEmployee::float getSalary() const {
	return _monthlySalary;
}

SalariedEmployee::void setSalary(float salary){
	_monthlySalary = salary;
}

SalariedEmployee::float calcSalary(float monthlySalary){
	return monthlySalary*_timeFraction;
}

SalariedEmployee::void printEmployee(){
	std::cout<<"ID Number: " << myIdNum<< "\nLast Name: "<< myLastName;
	std::cout<<"\nFirst Name: " << myFirstName << "\nMiddle Initial: " << myMiddleInitial;
	std::cout<<"\nDepartment Code: "<< myDeptCode <<"\nMonthly Salary: "<< _monthlySalary;
	std::cout<<"\nFraction of Time Worked: "<< _timeFraction << "\n";
}
