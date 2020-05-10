#pragma once
#include <iostream>
class Test
{
public:
	void setID(std::string ID);
	void setName(std::string name);

	virtual void print() = 0;

	std::string getID();
	std::string getName();

	Test();
	Test(std::string ID, std::string name);
	~Test();

protected:
	std::string ID;
	std::string name;
};

