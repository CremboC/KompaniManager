#include "stdafx.h"

#include "UserInterface.h"
#include "Core.h"

using std::cout;
using std::endl;

int _tmain(int argc, _TCHAR* argv[])
{
	Core core;
	UserInterface ui(core);

	// load main screen
	ui.mainScreen();

	ui.waitForInput();

	return 0;
}