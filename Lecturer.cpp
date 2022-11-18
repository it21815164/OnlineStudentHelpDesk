//header files
#include "Lecturer.h"
#include "Staff.h"
#include <iostream>

using namespace std;

//default constructor
Lecturer::Lecturer()
{
	facultyId[10] = "ITSE123";
}

//overloaded constructor
Lecturer::Lecturer(char Fid[10])
{
	facultyId[10] == "Fid";
}

void Lecturer::addMaterials()
{

}

Lecturer::~Lecturer()
{
  cout << "destructor is running" << endl;
}
