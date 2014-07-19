#include "stdafx.h"
#include "Employee.h"

using std::string;

Employee::Employee()
{
	employees.reserve(10);
	validatorErrors.reserve(10);
}

Employee::~Employee()
{}

ErrorCode Employee::add(sEmployee employee)
{
	employees.push_back(employee);

	return SUCCESS;
}

sEmployee Employee::get(int i)
{
	return employees[i];
}

bool Employee::validator(sEmployee employee)
{
	sPerson details = employee.details;

	if (details.name.length == 0)
	{
		
	}

	return false;
}

stringVector getValidatorErrors()
{
	return validatorErrors;
}