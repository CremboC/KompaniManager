#include <string>
#include <list>
#include <iostream>

#include <vector>

using std::list;
using std::vector;
using std::string;

typedef vector<sEmployee> employeeVector;
typedef vector<string> stringVector;

#pragma once
class Employee
{

private:
	employeeVector employees;
	employeeVector::iterator employeesIt;
	stringVector validatorErrors;

public:
	Employee();
	~Employee();

	ErrorCode add(sEmployee employee);
	sEmployee get(int i);

	bool validator(sEmployee employee);

	stringVector getValidatorErrors();

};
