GPP = g++ -std=c++17

all: test.o employee.o SalariedEmployee.o HourlyEmployee.o
	$(GPP) test.o employee.o SalariedEmployee.o HourlyEmployee.o  -o MAIN

employee.o: employee.cpp employee.h
	$(GPP) -c employee.cpp

SalariedEmployee.o: SalariedEmployee.cpp salariedEmployee.h employee.cpp employee.h
	$(GPP) -c SalariedEmployee.cpp employee.cpp

HourlyEmployee.o:  HourlyEmployee.cpp hourlyEmployee.h employee.cpp employee.h
	$(GPP) -c HourlyEmployee.cpp employee.cpp


test.o: test.cpp employee.cpp SalariedEmployee.cpp HourlyEmployee.cpp
	$(GPP) -c test.cpp employee.cpp SalariedEmployee.cpp HourlyEmployee.cpp

clean: 
	rm *.o
	rm MAIN
