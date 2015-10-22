#pragma once
#include"controlElementEmp.h"

class TextBox
	:public ControlElementEmp
{
public:
	TextBox(char *content="HelloWorld", char *Method="Show");
	~TextBox();

	void setText(char *content);
	void getText() const;

	void setMethod(char *method);
	void getMethod() const;

private:
	char *content, *method;
};

