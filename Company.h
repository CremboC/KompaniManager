#pragma once

#include <vector>

#include "Validator.h"

using std::vector;
using std::string;

using sCompany = structs::Company;

typedef vector<sCompany> companyVector;
typedef vector<string> stringVector;

class Company : Validator
{
private:
	companyVector companies;

public:
	Company();
	~Company();

	enums::ErrorCode add(sCompany comp);

	companyVector all();

	sCompany byId(int i);
	sCompany byName(string name);

	bool validate(sCompany company);
};