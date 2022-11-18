#pragma once
class ReadingMaterials
{
private:
	int materialNo;
	const char* faculty[20];
	const char* description[50];
	const char* link[20];

public:
	ReadingMaterials();  //default constructor
	ReadingMaterials(int Mno, char fclty[20], char desc[50], char link[20]);  //overload constructor
	void setFaculty();
	int getMaterilNo();
	void setLink();
	~ReadingMaterials();  //desructor
};
