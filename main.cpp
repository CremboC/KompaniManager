#include "stdafx.h"

#include "UserInterface.h"
#include "Core.h"

int _tmain(int argc, _TCHAR* argv[])
{
	Core core;
	UserInterface ui(core);

	// load main screen
	ui.mainScreen();

	ui.waitForInput();

	return 0;
}