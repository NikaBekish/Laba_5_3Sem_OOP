#pragma once
#include"controlElementEmp.h"

class Button
	:public ControlElementEmp
{
public:
	Button(char *text="Кнопка", char *Method="Click");
	~Button();

	void setMethod(char *method);
	void getMethod() const;

	void setText(char *text);
	void getText() const;

private:
	char *text, *method;
};
