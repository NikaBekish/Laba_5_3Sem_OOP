#include<iostream>
#include"rectangle.h"

using namespace std;

void Rectangle::show()	//����� ���������
{
	Figure *p = head;
	cout << "������: ";
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
	cout << "����� ������������ ��������������\n";
	this->name = name;
	this->width = w;
	this->length = l;
	this->square = (w*l);
}

Rectangle::~Rectangle()
{
	cout << "����� ����������� ��������������\n";
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
	cout << "��� ������: " << this->name << endl;
}

void Rectangle::getWidth() const
{
	cout << "������ = " << this->width << endl;
}

void Rectangle::getLength() const
{
	cout << "����� = " << this->length << endl;
}

void Rectangle::getSquare() const
{
	cout << "������� = " << this->width*this->length << endl;
}