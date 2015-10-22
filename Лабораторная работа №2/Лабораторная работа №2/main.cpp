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

//Задание 3 лабораторной
//Определить иерархию и/или композицию классов/объектов (в соответствии с вариантом). Реализовать классы.   
//Написать демонстрационную программу, в которой создаются объекты различных классов.
//Определение классов, их реализацию, демонстрационную программу поместить в отдельные файлы.
//Каждый класс должен иметь отражающее смысл название и информативный состав.
	//Вариант 24 
		//Классы – Фигура, Прямоугольник, Элемент управления,Textbox, Окно, Окно просмотра, Кнопка.

//Задание 4 лабораторной
//Использовать проект созданный в практикуме №3. 
//Расширить иерархию классов с использованием виртуального абстактного класса в качестве основы иерархии. 
//Определить в классе статическую компоненту - указатель на начало связанного списка объектов и статическую функцию для просмотра списка 
//(инициализировать вне определения класса, в глобальной области). 
//Статический метод просмотра списка вызывать не через объект, а через класс. 
//Написать демонстрационную программу, в которой создаются объекты различных классов и помещаются в список (методом класса), после чего список просматривается.

//Задание 5 лабораторной
//Использовать проект созданный в практикуме №4.
//Определить класс Сущность (указан в вариантах) для хранения разных типов объектов (в пределах иерархии) в виде списка или массива.
//Класс Сущность должен содержать методы get и set для списка / массива, 
//методы для  добавления и удаления объектов в список / массив, метод для вывода списка на консоль.
//Определить  управляющий класс Контроллер, который управляет объектом - Сущностью и реализовать в нем запросы по варианту :
//Создать Интерфейс программного средства. Подсчитать количество тексбоксов, количество интерактивных элементов управления.


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
	//Тест 3 лабораторной:
	Rectangle b;//прямоугольник

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


	TextBox c;//текстовое поле
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