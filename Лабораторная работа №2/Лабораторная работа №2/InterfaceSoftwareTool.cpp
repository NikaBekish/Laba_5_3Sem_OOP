#include<iostream>
#include"InterfaceSoftwareTool.h"

using namespace std;
//загоняем в список адреса
//надо в getType() реализовать получение типа
//посмотреть или можно virtual static в контроллере
void IST::show()
{
	IstController *p = head;
	cout << "Список: ";
	while (p)
	{
		p->getType();
		if (p->next != NULL)
		{
			cout << " -> ";
		}
		p = p->next;
	}
	cout << endl;
}

void IST::addList(void * adr)
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

void IST::setAdress(void * adr)
{
	adress = adr;
}

//void IST::getAdress() const
//{
//
//}

void getType()
{

}