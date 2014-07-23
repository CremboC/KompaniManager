#pragma once

#include "stdafx.h"

using std::string;

class StorageHandler
{
public:
	StorageHandler();
	~StorageHandler();
	enums::ErrorCode openFile(string uri);
};
