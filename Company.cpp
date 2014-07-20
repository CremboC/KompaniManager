#include "stdafx.h"

#include "Company.h"

using std::string;

using sCompany = structs::Company;

Company::Company()
{
	// init some testing companies
	add(sCompany{
		"MS",
		structs::Address{
			15,
			"South Way",
			"CF1 Q33B",
			"San Franciso",
			"USA"
		}
	});

	add(sCompany{
		"APL",
		structs::Address{
			1,
			"Apple Road",
			"CP203 203NQ",
			"Cupertino",
			"USA"
		}
	});
}

Company::~Company()
{}

ErrorCode Company::add(sCompany comp)
{
	companies.push_back(comp);

	return SUCCESS;
}

companyVector Company::all()
{
	return companies;
}

sCompany Company::byId(int i)
{
	sCompany comp;

	try
	{
		comp = companies.at(i);
	}
	catch (std::out_of_range o)
	{
	}

	return comp;
}

sCompany Company::byName(string name)
{
	sCompany comp = {};

	for (companyVector::size_type i = 0; i != companies.size(); i++)
	{
		if (companies[i].name == name)
		{
			comp = companies[i];
			break;
		}
	}

	return comp;
}

bool Company::validate(sCompany company)
{
	return false;
}