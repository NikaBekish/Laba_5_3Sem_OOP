#pragma once
#include"istController.h"

class IST
	:public IstController
{
public:
	IST();
	~IST();

	void setList();
	void getList() const;

	void setAdress(void*);
	/*void getAdress() const;*/

	void getType() const;

	static void show();
	void addList(void *);

private:
	void * adress;
};

IST::IST()
{
}

IST::~IST()
{
}