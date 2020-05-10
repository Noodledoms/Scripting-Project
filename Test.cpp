#include "Test.h"
Test::Test()
{
	this->ID = "";
	this->name = "";
}

Test::Test(std::string ID, std::string name)
{
	this->ID = ID;
	this->name = name;
}

std::string Test::getID()
{
	return ID;
}
std::string Test::getName()
{
	return name;
}

void Test::setID(std::string ID)
{
	this->ID = ID;
}
void Test::setName(std::string name)
{
	this->name = name;
}

void Test::print()
{
	std::cout << ID;
	std::cout << name;
}

Test::~Test() {}