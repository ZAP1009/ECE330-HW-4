#include <iostream>
#include "employee.h"

class HourlyEmployee : public Employee{
		
	private:
	long  myIdNum;			//Employee id number
	std::string myLastName;		//Employee last name
	std::string myFirstName;		//Employee first name
	std::string myMiddleInitial;	//Employee middle intial
	int myDeptCode;	
	float _hourlyWage;
	float _hours;
	
	
	public:
	
	HourlyEmployee(std::string lastName, std::string firstName, std::string middleInitial,
	float hourlywage, long idNum, int deptCode, float hoursWorked);
	~HourlyEmployee();	
	float getWage() const;
	void setWage(float wage);
	float getHours() const;
	void setHours(float hours);
	float calcSalary();
	void printEmployee();

};


