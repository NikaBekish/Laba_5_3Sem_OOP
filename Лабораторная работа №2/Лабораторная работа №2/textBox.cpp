#include<iostream>
#include"textBox.h"

using namespace std;

TextBox::TextBox(char *content, char *Method)
{
	cout << "Вызов конструктора TextBox\n";
	this->method = Method;
	this->content = content;
}

TextBox::~TextBox()
{
	cout << "Вызов деструктора TextBox\n";
}

void TextBox::setText(char *content)
{
	this->content = content;
}

void TextBox::getText() const
{
	cout << "Содержание текстового поля: " << this->content << endl;
}

void TextBox::setMethod(char *Method)
{
	this->method = Method;
}

void TextBox::getMethod() const
{
	cout << "Выполняемый метод: " << this->method << endl;
}