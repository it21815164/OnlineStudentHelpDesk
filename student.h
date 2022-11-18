#pragma once
#include "ReadingMaterials.h"
#include "Feedback.h"
#include "Issue.h"
#define SIZE 10

class Student
{
private:
	int stdID;
	const char* stdName[20];
	const char* Facultycode[10];

public:  
	Student(); //DEFAULT CONSTUCTOR
	Student(int id, const char name[20], const char fCode[10]);
	void setStudentDetails(int id, char name[20], char fCode[10], ReadingMaterials* r1, Feedback* f1);
  void viewMaterials(ReadingMaterials* RM);
  void addFeedback(Feedback* Fdbck);
	void raiseTicket();
	void deleteTicket();
	int checkTicket();
	void manageProfile();
  ~Student();  //DESTRUCTOR
};

