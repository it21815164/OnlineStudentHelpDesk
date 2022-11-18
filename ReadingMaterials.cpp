#include "ReadingMaterials.h"
#include <iostream>
using namespace std;

ReadingMaterials::ReadingMaterials()
{
	materialNo = 000;
	faculty[20] = "Info tech";
	description[50] = "reading matterial text";
	link[20] = "https://dvwev.kfj";
}

ReadingMaterials::ReadingMaterials(int Mno, char fclty[20], char desc[50], char lnk[20])
{
	materialNo = Mno;
	faculty[20] = fclty;
	description[50] = desc;
	link[20] = lnk;
}

void ReadingMaterials::setFaculty()
{

}

int ReadingMaterials::getMaterilNo()
{

}

void ReadingMaterials::setLink()
{

}

ReadingMaterials::~ReadingMaterials()
{
	cout << "destructor is runnig" << endl;
}
