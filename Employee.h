#include "Validator.h"

#include <vector>

using std::vector;
using std::string;

using sEmployee = structs::Employee;

typedef vector<structs::Employee> employeeVector;
typedef vector<string> stringVector;

#pragma once
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
