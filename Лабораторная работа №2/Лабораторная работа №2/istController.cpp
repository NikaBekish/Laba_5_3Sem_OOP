#include<iostream>
#include"istController.h"
#include"InterfaceSoftwareTool.h"

using namespace std;

void IstController::interactiveElementNum() const
{
	int num = 0;
	IST *p = (IST*)head;
	while (p)
	{
		num++;
		p = (IST*)p->next;
	}
	cout << "Число Интерактивных элементов равно: " << num;
	cout << endl;
}

void IstController::textBoxNum() const
{
	int num = 0;
	IST *p = (IST*)head;
	while (p)
	{
		if (!strcmp(typeid(*(p->getAdress())).name(), "class TextBox"))
			num++;
		p = (IST*)p->next;
	}
	cout << "Число элементов TextBox равно: " << num;
	cout << endl;
}

IstController::IstController()
{
	cout << "Вызов конструктора IstController\n";
}

IstController::~IstController()
{
	cout << "Вызов деструктора IstController\n";
}