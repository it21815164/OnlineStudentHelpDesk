//header files
#pragma once
#include "Staff.h"
#include "ReadingMaterials.h"


class Lecturer : public Staff //inheritance relation
{
private:
	const char* facultyId[10];
	ReadingMaterials* matterial[];

public:
	Lecturer();                   //default constructor
	Lecturer(char Fid[10]);       //overload constructor
	void addMaterials();          
	~Lecturer();                  //destructor
};

