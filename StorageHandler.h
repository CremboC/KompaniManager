#pragma once

#include "stdafx.h"

using std::string;

class StorageHandler
{
public:
	StorageHandler();
	~StorageHandler();
	ErrorCode openFile(string uri);
};
