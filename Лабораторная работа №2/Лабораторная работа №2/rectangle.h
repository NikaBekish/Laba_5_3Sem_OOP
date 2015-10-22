#pragma once
#include"figure.h"

using namespace std;

class Rectangle
	:public Figure
{
public:
	Rectangle(float w = 1.00F, float l = 1.00F, char* name="Rect");
	~Rectangle();

	void setName(char *name);
	void getName() const;

	void setWidth(float);
	void setLength(float);

	void getWidth() const;
	void getLength() const;
	void getSquare() const;

	static void show();
	void add();

private:
	float width, length, square;
	char *name;
};