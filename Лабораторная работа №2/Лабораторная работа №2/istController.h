#pragma once

class IstController
{
public:
	IstController *next;

	IstController();
	
	virtual ~IstController();

protected:
	static IstController *head;
};