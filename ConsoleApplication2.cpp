#include <iostream>
#include "RosterTest.h"

int main()
{
 
    const int numTests = 2;
    std::string testsData[numTests] =
    {
        "Test1,name1",
        "Test2,name2"
    };

    RosterTest* ros = new RosterTest(numTests);
    for (int i = 0; i < numTests; i++)
    {
        ros->parseThenAdd(testsData[i]);
    }

    ros->print_All();
   
}
