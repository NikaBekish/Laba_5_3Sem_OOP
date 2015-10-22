#include<iostream>
#include"viewer.h"

using namespace std;

void Viewer::setNumberOfEvents(int number)
{
	this->numOfEvents = number;
}

void Viewer::getNumberOfEvents()
{
	cout << "���������� ������� = " << this->numOfEvents << endl;
}

void Viewer::setSize(float w, float l)
{
	rectangle->setWidth(w);
	rectangle->setLength(l);
}

void Viewer::getSize()
{
	cout << "������ ����: "; rectangle->getWidth();
	cout << "\n����� ����: "; rectangle->getLength();
	cout << "\n������� ����: "; rectangle->getSquare();
	cout << endl;
}



Viewer::Viewer(int number)
{
	std::cout << "����� ������������ ���� ���������\n";
	rectangle = new Rectangle(50, 50);
	numOfEvents = number;
	
}

Viewer::~Viewer()
{
	std::cout << "����� ����������� ���� ���������\n";
}