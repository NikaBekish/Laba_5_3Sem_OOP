#pragma once

class Figure
{
public:
	Figure *next;

	Figure();

	virtual void setName(char *name) = 0;
	virtual void getName() const = 0;

	virtual void setWidth(float) = 0;
	virtual void setLength(float) = 0;

	virtual void getWidth() const = 0;
	virtual void getLength() const = 0;
	virtual void getSquare() const = 0;

	virtual ~Figure(void);

protected:
	static Figure *head;
};
