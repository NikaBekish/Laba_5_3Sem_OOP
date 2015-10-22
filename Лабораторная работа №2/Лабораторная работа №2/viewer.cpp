#include<iostream>
#include"viewer.h"

using namespace std;

void Viewer::setNumberOfEvents(int number)
{
	this->numOfEvents = number;
}

void Viewer::getNumberOfEvents()
{
	cout << "Количество событий = " << this->numOfEvents << endl;
}

void Viewer::setSize(float w, float l)
{
	rectangle->setWidth(w);
	rectangle->setLength(l);
}

void Viewer::getSize()
{
	cout << "Ширина окна: "; rectangle->getWidth();
	cout << "\nДлина окна: "; rectangle->getLength();
	cout << "\nПлощадь окна: "; rectangle->getSquare();
	cout << endl;
}



Viewer::Viewer(int number)
{
	std::cout << "Вызов конструктора окна состояния\n";
	rectangle = new Rectangle(50, 50);
	numOfEvents = number;
	
}

Viewer::~Viewer()
{
	std::cout << "Вызов деструктора окна состояния\n";
}