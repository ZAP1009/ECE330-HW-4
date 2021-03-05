#include <iostream>
#include "hourlyEmployee.h"

HourlyEmployee::HourlyEmployee(std::string lastName, std::string firstName, std::string middleInitial,float hourlywage, long idNum, int deptCode, float hoursWorked):
Employee(idNum,lastName,firstName, middleInitial, deptCode), _hourlyWage{hourlywage},_hours{hoursWorked} { }
	
HourlyEmployee::~HourlyEmployee() { }
	
HourlyEmployee::float getWage() const {
	return _hourlyWage;
}
	
HourlyEmployee::void setWage(float wage) {
	_hourlyWage = wage;
}
	
HourlyEmployee::float calcSalary(){
	return _hourlyWage*_hours;
}
	
HourlyEmployee::void printEmployee(){
	std::cout<<"ID Number: " << myIdNum<< "\nLast Name: "<< myLastName;
	std::cout<<"\nFirst Name: " << myFirstName << "\nMiddle Initial: " << myMiddleInitial;
	std::cout<<"\nDepartment Code: "<< myDeptCode <<"\nHourly Wage: "<< _hourlyWage;
	std::cout<<"\nHours: "<< _hours << "\n";

