#include <iostream>
#include "hourlyEmployee.h"


HourlyEmployee::HourlyEmployee(std::string lastName, std::string firstName, std::string middleInitial, float hourlywage, long idNum, int deptCode, float hoursWorked){
	myIdNum = idNum;
	myLastName = lastName;
	myFirstName = firstName;
    myMiddleInitial = middleInitial;
	myDeptCode = deptCode;
	_hourlyWage = hourlywage;
	_hours = hoursWorked;
}
	
HourlyEmployee::~HourlyEmployee() { }
	
float HourlyEmployee::getWage() const {
	return _hourlyWage;
}

float HourlyEmployee::getHours() const {
	return _hours;
}
	
void HourlyEmployee::setHours(float hours){
	_hours = hours;
}

void HourlyEmployee::setWage(float wage) {
	_hourlyWage = wage;
}
	
float HourlyEmployee::calcSalary(){
	float hours = getHours();
	if (hours <= 40) {
		return _hourlyWage*hours;
	}
	else{
		return (_hourlyWage*40)+(1.5)*(_hourlyWage*(hours-40));
	}
}
	
void HourlyEmployee:: printEmployee(){
	float a = calcSalary();
	std::cout<<"\n"<<"ID Number: " << myIdNum<< "\nLast Name: "<< myLastName;
	std::cout<<"\nFirst Name: " << myFirstName << "\nMiddle Initial: " << myMiddleInitial;
	std::cout<<"\nDepartment Code: "<< myDeptCode <<"\nHourly Wage: "<< _hourlyWage;
	std::cout<<"\nHours: "<< _hours <<"\nSalary: "<<a<<"\n\n";
}

