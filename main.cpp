#include "stdafx.h"

#include "UserInterface.h"
#include "Core.h"

int _tmain(int argc, _TCHAR* argv[])
{
	Core core;
	UserInterface ui(core);

	while (ui.running)
	{
		try
		{
			ui.render();
		}
		catch (exceptions::Exception *e)
		{
			e->getMessage();
		}

		ui.clear();
	}

	return 0;
}