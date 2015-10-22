#pragma once
#include"istController.h"
#include"controlElement.h"


class IST
	:public IstController
{
public:
	IST();
	~IST();

	void setAdress(ControlElement*);
	ControlElement* getAdress() const;

	static void show();
	void addList(ControlElement *);
	void delList();

private:
	ControlElement * adress;
};