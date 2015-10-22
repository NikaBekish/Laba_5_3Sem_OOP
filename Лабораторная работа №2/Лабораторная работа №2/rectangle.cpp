#include<iostream>
#include"rectangle.h"

using namespace std;

void Rectangle::show()	//метод просмотра
{
	Figure *p = head;
	cout << "Список: ";
	while (p)
	{
		p->getName();
		if (p->next!=NULL)
		{
			cout << " -> ";
		}
		p = p->next;
	}
	cout << endl;
}

void Rectangle::add()
{
	if (!head)
	{
		head = this;
		this->next = NULL;
	}
	else
	{
		Figure *q = head;
		if (q->next == NULL)
		{
			q->next = this;
			this->next = NULL;
		}
		else
		{
			while (q->next != NULL)
			{
				q = q->next;
			}
			q->next = this;
			this->next = NULL;
		}
	}
}

Rectangle::Rectangle(float w, float l, char * name)
{
	cout << "Вывов конструктора прямоугольника\n";
	this->name = name;
	this->width = w;
	this->length = l;
	this->square = (w*l);
}

Rectangle::~Rectangle()
{
	cout << "Вызов деструктора прямоугольника\n";
}

void Rectangle::setName(char *name)
{
	this->name = name;
}

void Rectangle::setWidth(float w)
{
	this->width = w;
	square = (width*length);
}

void Rectangle::setLength(float l)
{
	this->length = l;
	square = (width*length);
}

void Rectangle::getName() const
{
	cout << "Имя фигуры: " << this->name << endl;
}

void Rectangle::getWidth() const
{
	cout << "Ширина = " << this->width << endl;
}

void Rectangle::getLength() const
{
	cout << "Длина = " << this->length << endl;
}

void Rectangle::getSquare() const
{
	cout << "Площадь = " << this->width*this->length << endl;
}