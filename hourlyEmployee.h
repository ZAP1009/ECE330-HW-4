class HourlyEmployee : public Employee{
		
	private:
	long  myIdNum;			//Employee id number
	string myLastName;		//Employee last name
	string myFirstName;		//Employee first name
	string myMiddleInitial;	//Employee middle intial
	int myDeptCode;	
	float _hourlyWage;
	float _hours;
	
	
	public:
	
	HourlyEmployee(std::string lastName, std::string firstName, std::string middleInitial,
	float hourlywage, long idNum, int deptCode, float hoursWorked);
	~HourlyEmployee();	
	float getWage() const;
	void setWage(float wage);
	float calcSalary(float hours, float hourlyWage);
	void printEmployee();

};


