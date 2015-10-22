#include<iostream>
#include"InterfaceSoftwareTool.h"
#include<typeinfo>

using namespace std;
//загоняем в список адреса
void IST::show()
{
	IST *p = (IST*)head;
	cout << "Список: ";
	while (p)
	{
		cout << typeid(*(p->getAdress())).name();
		if (p->next != NULL)
		{
			cout << " -> ";
		}
		p = (IST*)p->next;
	}
	cout << endl;
}

void IST::addList(ControlElement * adr)//ControlElement
{
	IST *obj= new IST();
	obj->setAdress(adr);
	if (!head)
	{
		head = obj;
		head->next = NULL;
	}
	else
	{
		IstController *q = head;
		if (q->next == NULL)
		{
			q->next = obj;
			obj->next = NULL;
		}
		else
		{
			while (q->next != NULL)
			{
				q = q->next;
			}
			q->next = obj;
			obj->next = NULL;
		}
	}
}

void IST::delList()
{
	if (head)
	{
		IstController *q = head, *t;
		if (q->next!=NULL)
		{
			while (q->next!=NULL)
			{
				t = q;
				q = q->next;
			}
			delete q;
			t->next = NULL;
		}
		else
		{
			delete q;
			head = NULL;
		}
	}
}

void IST::setAdress(ControlElement * adr)
{
	adress = adr;
}

ControlElement* IST::getAdress() const
{
	return adress;
}

IST::IST()
{
	cout << "Вызов конструктора IST\n";
}

IST::~IST()
{
	cout << "Вызов деструктора IST\n";
}
