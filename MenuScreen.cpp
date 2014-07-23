#include "stdafx.h"

#include "MenuScreen.h"

MenuScreen::MenuScreen(UIUtils* utils, UserInterface* ui)
{
	this->utils = utils;
	this->ui = ui;
}

MenuScreen::~MenuScreen()
{}

void MenuScreen::render()
{
	// show all existing companies
	utils->printPadding();

	utils->printCentered("HELLO, WELCOME TO KompaniManager");

	utils->printHeader(consts::companyHeaders);

	companyVector comps = ui->core.companies.all();

	for (companyVector::size_type i = 0; i < comps.size(); i++)
	{
		utils->printRow(comps[i]);
		cout << comps[i].name << endl;
	}

	cout << "[n] new company; [e] employees; [c] companies;" << endl;

	char inp = ui->waitForInput(&inp);

	switch (inp)
	{
	case 'n':
		break;

	case 'e':
		break;

	case 'c':
		break;

	default:
		break;
	}
}