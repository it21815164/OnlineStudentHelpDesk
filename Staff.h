#pragma once
#include "Feedback.h"
#include "Response.h"
#define SIZE 10

class Staff
{
protected:
	int stfID;
	const char* stfName[30];
	const char* userName[15];
	const char* stfPassword[20];

private:
  Response* responses[];  //composition relationship
  Feedback* feedback1;     //bydirectional relationship


public:
	Staff();
	Staff(int ID, char sName[30], char Uname[15], char sPwd[20]);
  responses[0] = new response[];
	void manageProfile();
	void respondTicket();
	int checkFeedback();
	~Staff();
};

