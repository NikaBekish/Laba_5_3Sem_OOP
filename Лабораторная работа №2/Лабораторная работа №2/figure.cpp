#include<iostream>
#include"figure.h"

using namespace std;


Figure::Figure()
{
	cout << "Вызывается конструктор фигуры\n";
}

Figure::~Figure(void)
{
	cout << "Вызывается деструктор фигуры\n";
}