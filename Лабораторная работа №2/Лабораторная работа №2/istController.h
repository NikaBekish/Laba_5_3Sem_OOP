#pragma once

class IstController
{
public:
	IstController *next;

	IstController();
	
	void interactiveElementNum() const;
	void textBoxNum() const;

	virtual ~IstController();

protected:
	static IstController *head;
};