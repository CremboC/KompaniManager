#include "Validator.h"
#include <vector>

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

	ErrorCode add(sCompany comp);

	companyVector all();

	sCompany byId(int i);
	sCompany byName(string name);

	bool validate(sCompany company);
};
