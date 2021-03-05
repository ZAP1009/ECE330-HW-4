#include <iostream>
#include "salariedEmployee.h"



SalariedEmployee::SalariedEmployee(std::string lastName, std::string firstName, std::string middleInitial,float monthlySalary, long idNum, int deptCode, float timeFraction){
	myIdNum = idNum;
	myLastName = lastName;
	myMiddleInitial = middleInitial;
	myFirstName = firstName;
	myDeptCode = deptCode;
	_monthlySalary = monthlySalary;
	_timeFraction = timeFraction;
}

SalariedEmployee::~SalariedEmployee(){ }	

float SalariedEmployee:: getSalary() const {
	return _monthlySalary;
}

void SalariedEmployee:: setSalary(float salary){
	_monthlySalary = salary;
}

float SalariedEmployee::calcSalary(){
	return _monthlySalary*_timeFraction;
}

void SalariedEmployee:: printEmployee(){
	float s = calcSalary();
	std::cout<<"\n"<<"ID Number: " << myIdNum<< "\nLast Name: "<< myLastName;
	std::cout<<"\nFirst Name: " << myFirstName << "\nMiddle Initial: " << myMiddleInitial;
	std::cout<<"\nDepartment Code: "<< myDeptCode <<"\nMonthly Salary: "<< _monthlySalary;
	std::cout<<"\nFraction of Time Worked: "<< _timeFraction << "\nSalary: "<<s <<"\n\n";
}
