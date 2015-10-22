#include<iostream>
#include"button.h"

using namespace std;

void Button::setText(char *text)
{
	this->text = text;
}

void Button::setMethod(char *Method)
{
	this->method = Method;
}

void Button::getMethod() const
{
	cout << "����������� �����: " << this->method << endl;
}

void Button::getText() const
{
	cout <<this->text;
}


Button::Button(char *text,char *Method)
{
	std::cout << "����� ������������ ������\n";
	this->method = Method;
	this->text = text;
}

Button::~Button()
{
	std::cout << "����� ����������� ������\n";
}