#pragma once

class IstController
{
public:
	IstController *next;

	IstController();

	virtual void setList() = 0;
	virtual void getList() const = 0;

	virtual void getType() const = 0;

	virtual ~IstController();

protected:
	static IstController *head;
};