#include "stdafx.h"

#include <iostream>
#include <string>
#include <chrono>
#include <thread>

#include "StorageHandler.h"
#include "UserInterface.h"

using std::cin;

using std::this_thread::sleep_for;
using std::chrono::milliseconds;

int _tmain(int argc, _TCHAR* argv[])
{
	UserInterface interface;
	StorageHandler store;

	cin.get();

	interface.clear();

	bool finished = false;

	printf("%s", "|%");

	for (int i = 0; i <= 50; i++)
	{
		printf("%s", "=");

		sleep_for(milliseconds(500));
	}

	printf("%s", ">|");

	cin.get();

	return 0;
}