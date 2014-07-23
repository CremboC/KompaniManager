#pragma once
class AbstractScreen
{
public:
	virtual ~AbstractScreen();
	virtual void render() = 0;
};
