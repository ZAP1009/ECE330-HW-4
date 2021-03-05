/* File: test.cpp */
// File to test the basic employee class

#include<iostream>
#include <string>
#include "employee.h"
#include "salariedEmployee.h"
#include "hourlyEmployee.h"

using namespace std;

int main() 
{
  Employee
  e1 (001, "Jones", "Booker", "T", 22),
  e2 (002, "Hendrix", "Jimi", "NMI ", 14),
  e3 (003, "Morrison", "Jim", "D", 03);
  
  e1.printEmployee();
  e2.printEmployee();


  HourlyEmployee h1("Parker", "Zane", "A", 12.00, 1234, 901, 40);
  HourlyEmployee h2("Smith", "John", "A", 25.49, 9807, 400, 50);

  h1.printEmployee();
  h2.printEmployee();

  SalariedEmployee s1("Williams", "Erica", "J", 6000, 1006,999, .5);
  SalariedEmployee s2("Garcia", "Manuel", "A", 10000, 4004,717, 1);

  s1.printEmployee();
  s2.printEmployee();

     

}
