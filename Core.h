#pragma once

#include "Company.h"
#include "Employee.h"

class Core
{
public:
	Core();
	~Core();

	Company companies;
	Employee employees;
};