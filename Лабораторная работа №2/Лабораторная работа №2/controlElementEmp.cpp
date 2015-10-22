#include<iostream>
#include"controlElementEmp.h"

using namespace std;

void ControlElementEmp::show()
{
	ControlElement *p = head;
	cout << "������: ";
	while (p)
	{
		p->getMethod();
		if (p->next != NULL)
		{
			cout << " -> ";
		}
		p = p->next;
	}
	cout << endl;
}

void ControlElementEmp::add()
{
	if (!head)
	{
		head = this;
		head->next = NULL;
	}
	else
	{
		ControlElement *q = head;
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

ControlElementEmp::ControlElementEmp()
{
	cout << "����� ������������ ControlElementEmp\n";
}

ControlElementEmp::~ControlElementEmp()
{
	cout << "����� ����������� ControlElementEmp\n";
}