#include<iostream>
#include"textBox.h"

using namespace std;

TextBox::TextBox(char *content, char *Method)
{
	cout << "����� ������������ TextBox\n";
	this->method = Method;
	this->content = content;
}

TextBox::~TextBox()
{
	cout << "����� ����������� TextBox\n";
}

void TextBox::setText(char *content)
{
	this->content = content;
}

void TextBox::getText() const
{
	cout << "���������� ���������� ����: " << this->content << endl;
}

void TextBox::setMethod(char *Method)
{
	this->method = Method;
}

void TextBox::getMethod() const
{
	cout << "����������� �����: " << this->method << endl;
}