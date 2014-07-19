#include <string>
#include <list>
#include <iostream>

#include <vector>

using std::list;
using std::vector;

typedef vector<sEmployee> employeeVector;

#pragma once
class Employee
{
private:
	employeeVector employees;
	employeeVector::iterator employeesIt;

public:
	Employee();
	~Employee();

	ErrorCode add(sEmployee employee);
	sEmployee get(int i);

	bool validator(sEmployee employee);
};
