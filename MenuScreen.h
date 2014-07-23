#pragma once

#include "AbstractScreen.h"
#include "UserInterface.h"
#include "UIUtils.h"

class MenuScreen :
	public AbstractScreen
{
private:

	UIUtils *utils;
	UserInterface *ui;

public:
	MenuScreen(UIUtils*, UserInterface*);
	~MenuScreen();

	void render();
};
