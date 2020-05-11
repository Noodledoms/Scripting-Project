#include "student.h"

// full constructor
Student::Student(std::string studentID, std::string firstName, std::string lastName, std::string emailAddress, std::string studentAge, int daysToComplete[], DegreeType type)
{
	this->studentID = studentID;
	this->firstName = firstName;
	this->lastName = lastName;
	this->emailAddress = emailAddress;
	this->studentAge = studentAge;
	this->daysToComplete = new int[daysToCompleteSize];
	for (int i = 0; i < 3; i++) this->daysToComplete[i] = daysToComplete[i];
	this->dType = type;
};

// empty constructor 
Student::Student()
{
	this->studentID = "";
	this->firstName = "";
	this->lastName = "";
	this->emailAddress = "";
	this->studentAge = "";
	this->daysToComplete = new int[daysToCompleteSize];
	for (int i = 0; i < daysToCompleteSize; i++) this->daysToComplete[i] = 0;
	this->dType = DegreeType::UNDECIDED;
};


//getters

std::string Student::getStudentID()
{
	return studentID;
}

std::string Student::getFirstName()
{
	return firstName;
}

std::string Student::getLastName()
{
	return lastName;
}

std::string Student::getEmailAddress()
{
	return emailAddress;
}

std::string Student::getStudentAge()
{
	return studentAge;
}

int* Student::getDaysToComplete()
{
	return daysToComplete;
}

inline DegreeType Student::getDegreeType()
{
	return dType;
}

//setters

void Student::setStudentID(std::string studentID)
{
	this->studentID;
}

void Student::setFirstName(std::string firstName)
{
	this->firstName;
}

void Student::setLastName(std::string lastName)
{
	this->lastName;
}

void Student::setEmailAddress(std::string emailAddress)
{
	this->emailAddress;
}



void Student::setStudentAge(std::string studentAge)
{
	this->studentAge;
}

void Student::setDaysToComplete(int daysToComplete[])
{
	
	this->daysToComplete = new int[daysToCompleteSize];
	for (int i = 0; i < 3; i++) this->daysToComplete[i] = daysToComplete[i];
	
}

void Student::setDegreeType(DegreeType d)
{
	this->dType = d;
}



void Student::print()
{
	std::cout << std::left << studentID << std::endl;
	std::cout << std::left << firstName << std::endl;
	std::cout << std::left << lastName << std::endl;
	std::cout << std::left << emailAddress << std::endl;
	std::cout << std::left << studentAge << std::endl;
	std::cout << std::left << daysToComplete[0] << std::endl;
	std::cout << std::left << daysToComplete[1] << std::endl;
	std::cout << std::left << daysToComplete[2] << std::endl;
	std::cout << std::left << DegreeTypeStrings[getDegreeType()] << std::endl;
}

Student::~Student()
{
	if (daysToComplete != nullptr)
	{
		delete[] daysToComplete;
		daysToComplete = nullptr;
	}
}