#include<iostream>
#include"window.h"

using namespace std;

void Window::setActiv(bool b)
{
	this->isActiv = b;
}

void Window::getActiv()
{
	cout << "Окно является ";
	this->isActiv ? cout << "активным\n" : cout << "неактивным\n";
}

void Window::setSize(float w, float l)
{
	rectangle->setWidth(w);
	rectangle->setLength(l);
}

void Window::getSize()
{
	cout << "Ширина окна: "; rectangle->getWidth();
	cout << "\nДлина окна: "; rectangle->getLength();
	cout << "\nПлощадь окна: "; rectangle->getSquare();
	cout << endl;
}

Window::Window(bool isA)
{
	std::cout << "Вызов конструктора Окна\n";
	rectangle = new Rectangle(50, 50);
	isActiv = isA;
}

Window::~Window()
{
	std::cout << "Вызов деструктора Окна\n";
}