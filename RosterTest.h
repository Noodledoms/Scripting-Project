#pragma once
#include "Test.h"
class RosterTest
{
private:
	int lastIndex;
	int capacity;
	Test** classRosterArray;

public:
	RosterTest();
	RosterTest(int capacity);

	void parseThenAdd(std::string datarow);
	void print_All();
	~RosterTest();
};

