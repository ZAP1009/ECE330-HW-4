#include <iostream>
#include "employee.h"

class SalariedEmployee : public Employee{
	
	private:
    long  myIdNum;			//Employee id number
    std::string myLastName;		//Employee last name
	std::string myFirstName;		//Employee first name
	std::string myMiddleInitial;	//Employee middle intial
	int myDeptCode;	
	float _monthlySalary;
	float _timeFraction;
	
	public:
	SalariedEmployee(std::string lastName, std::string firstName, std::string middleInitial,float monthlySalary, long idNum, int deptCode, float timeFraction);
	~SalariedEmployee();	
	float getSalary() const;
	void setSalary(float salary);
	float calcSalary();
	void printEmployee();

};


