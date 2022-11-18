#include "Issue.h"
#include <iostream>
using namespace std;

Issue::Issue() 
{
	subject[10] = "";
	type[15] = "";
	description = "";
}
Issue::Issue(const char subjct[10], const char typ[15], const char descript)
{
	subject[10] = subjct;
	type[15] = typ;
	description = descript;
}
void Issue::setSubject()
{

}
void Issue::setType()
{

}
void Issue::getSubject()
{

}
void Issue::getType()
{

}

Issue::~Issue()
{
	cout << "destructor runs" << endl;
}
