#pragma once
#include"rectangle.h"

class Window
{
	Rectangle *rectangle;
public:
	Window(bool isA=0);
	~Window();

	void setActiv(bool);
	void getActiv();
	void setSize(float, float);
	void getSize();

private:
	bool isActiv;
};

