#pragma once

#include <vector>

#include "Validator.h"

using std::vector;
using std::string;

using sEmployee = structs::Employee;

typedef vector<structs::Employee> employeeVector;
typedef vector<string> stringVector;

class Employee : Validator
{
private:
	employeeVector employees;
	employeeVector::iterator employeesIt;

public:
	stringVector validatorErrors;

	Employee();
	~Employee();

	ErrorCode add(sEmployee employee);
	sEmployee get(int i);

	bool validate(sEmployee employee);

	stringVector getValidatorErrors();
};
