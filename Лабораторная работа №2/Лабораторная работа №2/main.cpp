#include<iostream>
#include"figure.h"
#include"rectangle.h"
#include"controlElement.h"
#include"textBox.h"
#include"button.h"
#include"window.h"
#include"viewer.h"
#include"InterfaceSoftwareTool.h"
#include"istController.h"

using namespace std;

void laba3Test();
void laba4Test();

Figure *Figure::head = NULL;
ControlElement *ControlElement::head = NULL;
IstController *IstController::head = NULL;

//������� 3 ������������
//���������� �������� �/��� ���������� �������/�������� (� ������������ � ���������). ����������� ������.   
//�������� ���������������� ���������, � ������� ��������� ������� ��������� �������.
//����������� �������, �� ����������, ���������������� ��������� ��������� � ��������� �����.
//������ ����� ������ ����� ���������� ����� �������� � ������������� ������.
	//������� 24 
		//������ � ������, �������������, ������� ����������,Textbox, ����, ���� ���������, ������.

//������� 4 ������������
//������������ ������ ��������� � ���������� �3. 
//��������� �������� ������� � �������������� ������������ ����������� ������ � �������� ������ ��������. 
//���������� � ������ ����������� ���������� - ��������� �� ������ ���������� ������ �������� � ����������� ������� ��� ��������� ������ 
//(���������������� ��� ����������� ������, � ���������� �������). 
//����������� ����� ��������� ������ �������� �� ����� ������, � ����� �����. 
//�������� ���������������� ���������, � ������� ��������� ������� ��������� ������� � ���������� � ������ (������� ������), ����� ���� ������ ���������������.

//������� 5 ������������
//������������ ������ ��������� � ���������� �4.
//���������� ����� �������� (������ � ���������) ��� �������� ������ ����� �������� (� �������� ��������) � ���� ������ ��� �������.
//����� �������� ������ ��������� ������ get � set ��� ������ / �������, 
//������ ���  ���������� � �������� �������� � ������ / ������, ����� ��� ������ ������ �� �������.
//����������  ����������� ����� ����������, ������� ��������� �������� - ��������� � ����������� � ��� ������� �� �������� :
//������� ��������� ������������ ��������. ���������� ���������� ����������, ���������� ������������� ��������� ����������.


//									IstController
//										 |
//										IST
//									(ControlElement*)	
//
//			 Figure					ControlElement - ControlElementEmp
//				|									   /			\
//			Rectangle			                      Button	  TextBox
//		   		 				 
//	  Widow			Viewer	  	
//	&Rectangle		&Rectangle		  
//					     

int main()
{
	setlocale(LC_ALL, "Rus");
	Button b1,b2;
	TextBox t1, t2;
	IST i1;
	IstController c;
	i1.addList(&b1);
	i1.addList(&b2);
	i1.addList(&t1);
	i1.addList(&t2);
	IST::show();
	c.interactiveElementNum();
	c.textBoxNum();
	i1.delList();
	IST::show();
	i1.delList();
	i1.delList();
	IST::show();
	i1.delList();
	IST::show();
	i1.delList();
	IST::show();
	return 0;
}

void laba3Test()
{
	//���� 3 ������������:
	Rectangle b;//�������������

	b.getName();
	b.getLength();
	b.getWidth();
	b.getSquare();

	cout << endl;

	b.setLength(3.47F);
	b.setWidth(3.14F);
	b.setName("Pram");

	cout << endl;

	b.getName();
	b.getLength();
	b.getWidth();
	b.getSquare();

	cout << endl;


	TextBox c;//��������� ����
	c.setMethod("Show");
	c.setText("TEST");
	
	cout << endl;

	c.getText();
	c.getMethod();

	cout << endl;

	Window e(1);

	e.getActiv();
	e.getSize();

	cout << endl;

	e.setActiv(0);
	e.setSize(100, 100);

	e.getActiv();
	e.getSize();
	
	cout << endl;

	Viewer f(49);

	f.getNumberOfEvents();

	f.setNumberOfEvents(30);
	f.getNumberOfEvents();

	cout << endl;

	Button g("PushMe", "DoubleClick");

	g.getText();
	g.getMethod();

	g.setMethod("Click");

	cout << endl;

	g.getMethod();

	cout << endl;
}

void laba4Test()
{
	Rectangle Rec1;
	Rec1.add();
	Rectangle Rec2(10, 10, "Andryusha");
	Rec2.add();
	Rectangle Rec3(15, 15, "Polya");
	Rec3.add();

	Rectangle::show();

	cout << endl << endl;

	Button Butt1, Butt2("PushMe", "Click"), Butt3("DoubPushMe", "DoubClick");
	Butt1.add();
	Butt2.add();
	Butt3.add();

	ControlElementEmp::show();

	TextBox TextB1, TextB2("Hi!", "Don't_Show"), TextB3("TextBoxMax", "Invisible");
	TextB1.add();
	TextB2.add();
	TextB3.add();

	ControlElementEmp::show();

	cout << endl << endl;
}