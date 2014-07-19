#include "stdafx.h"

#include <iostream>

using std::string;

#pragma once
class StorageHandler
{
public:
	StorageHandler();
	~StorageHandler();
	ErrorCode openFile(string uri);
};
