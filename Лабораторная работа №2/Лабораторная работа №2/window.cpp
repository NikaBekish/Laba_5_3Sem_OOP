#include<iostream>
#include"window.h"

using namespace std;

void Window::setActiv(bool b)
{
	this->isActiv = b;
}

void Window::getActiv()
{
	cout << "���� �������� ";
	this->isActiv ? cout << "��������\n" : cout << "����������\n";
}

void Window::setSize(float w, float l)
{
	rectangle->setWidth(w);
	rectangle->setLength(l);
}

void Window::getSize()
{
	cout << "������ ����: "; rectangle->getWidth();
	cout << "\n����� ����: "; rectangle->getLength();
	cout << "\n������� ����: "; rectangle->getSquare();
	cout << endl;
}

Window::Window(bool isA)
{
	std::cout << "����� ������������ ����\n";
	rectangle = new Rectangle(50, 50);
	isActiv = isA;
}

Window::~Window()
{
	std::cout << "����� ����������� ����\n";
}