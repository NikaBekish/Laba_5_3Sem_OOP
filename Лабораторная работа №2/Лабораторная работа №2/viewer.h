#pragma once
#include<iostream>
#include"rectangle.h"

class Viewer
{
	Rectangle *rectangle;
public:
	Viewer(int number=0);
	~Viewer();

	void setNumberOfEvents(int number=1);
	void getNumberOfEvents();
	void setSize(float, float);
	void getSize();

private:
	int numOfEvents;
};

