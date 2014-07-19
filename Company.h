#include "Validator.h"

#include <string>
#include <list>
#include <iostream>

#include <vector>

using std::list;
using std::vector;
using std::string;

using sCompany = structs::Company;

typedef vector<sCompany> companyVector;
typedef vector<string> stringVector;

#pragma once
class Company : Validator
{

private:
	companyVector companies;

public:
	Company();
	~Company();
	
	static sCompany getCompany(int i);
	bool validate(sCompany company);
};

