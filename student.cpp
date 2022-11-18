#include "Student.h"
#include <iostream>
using namespace std;

Student::Student()
{
	stdID = 000;
	stdName[20] = "studnt";
	Facultycode[10] = "it1234";
}

Student::Student(int id, const char name[20], const char fCode[10])
{
	stdID = id;
	stdName[20] = name;
	Facultycode[10] = fCode;
}
void Student::raiseTicket()
{

}

void Student::deleteTicket()
{

}
int  Student::checkTicket()
{

}
void Student::manageProfile()
{

}
Student::~Student()
{

}
