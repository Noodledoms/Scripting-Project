#include "RosterTest.h"
RosterTest::RosterTest()
{
	this->capacity = 0;
	this->lastIndex = -1;
	this->classRosterArray = nullptr;
}

RosterTest::RosterTest(int capacity)
{
	this->capacity = capacity;
	this->lastIndex = -1;
	this->classRosterArray = new Test * [capacity];
}

void RosterTest::parseThenAdd(std::string row)
{
	if (lastIndex < capacity - 1)
	{
		lastIndex++;
		int rhs = row.find(",");
		std::string ID = row.substr(0, rhs);

		int lhs = rhs + 1;
		rhs = row.find(",", lhs);
		std::string name = row.substr(lhs, row.length() - lhs);
	}
}

void RosterTest::print_All()
{
	for (int i = 0; i <= lastIndex; i++)
	{
		(this->classRosterArray)[i]->print();
	}
}
RosterTest::~RosterTest()
{
	for (int i = 0; i <= lastIndex; i++)
	{
		delete this->classRosterArray[i];
	}
	delete classRosterArray;
}

