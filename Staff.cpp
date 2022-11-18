//headers
#include "Staff.h" 
#include "iostream"
using namespace std;

//default constructor
Staff::Staff()
{
	stfID = 000;
	stfName[30] = "admin";
	userName[15] = "admin";
	stfPassword[20] = "123admin";
}

//overload constructor
Staff::Staff(int ID, char sName[30], char Uname[15], char sPwd[20])
{
	stfID = ID;
	stfName[30] = sName;
	userName[15] = Uname;
	stfPassword[20] = sPwd;
}

void Staff::manageProfile()
{

}

void Staff::respondTicket()
{

}

int Staff::checkFeedback()
{

}

//Destructor
Staff::~Staff()
{
	cout << "destructor runs" << endl;
}
