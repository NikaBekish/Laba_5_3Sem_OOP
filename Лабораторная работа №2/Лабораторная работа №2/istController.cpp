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
	cout << "����� ������������� ��������� �����: " << num;
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
	cout << "����� ��������� TextBox �����: " << num;
	cout << endl;
}

IstController::IstController()
{
	cout << "����� ������������ IstController\n";
}

IstController::~IstController()
{
	cout << "����� ����������� IstController\n";
}