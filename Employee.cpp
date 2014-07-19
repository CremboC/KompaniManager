#include "stdafx.h"
#include "Employee.h"

using std::string;
using structs::Person;

using sEmployee = structs::Employee;

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

bool Employee::validate(sEmployee employee)
{
	Person details = employee.details;

	if (details.name.length() == 0)
		validatorErrors.push_back("Name is required!");

	if (details.surname.length() == 0)
		validatorErrors.push_back("Surname is required!");

	if (validatorErrors.size() == 0)
		return true;

	return false;
}