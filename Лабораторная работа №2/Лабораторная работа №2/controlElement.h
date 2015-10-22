#pragma once

class ControlElement
{
public:
	ControlElement *next;

	ControlElement();
	virtual ~ControlElement();

	virtual void setMethod(char *method) = 0;
	virtual void getMethod() const = 0;

	virtual void setText(char *text) = 0;
	virtual void getText() const = 0;

protected:
	static ControlElement *head;
};
