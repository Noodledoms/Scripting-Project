#include "roster.h"

const int numStudents = 4;
static std::string studentData[numStudents] =
{
	"A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
	"A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
	"A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
	"A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY"
};
int main()
{
	
	Roster* ros = new Roster(numStudents);

	for (int i = 0; i < numStudents; i++)
	{
		ros->parseAdd(studentData[i]);
	}
	
	ros->print_All();
}