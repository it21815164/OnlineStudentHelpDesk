#pragma once
#define SIZE 10
#include "Student.h"

class Issue
{
private:
	const char* subject[10];
	const char* type[15];
	const char* description;
  Student* student[SIZE];
  Response* responses[SIZE];

public:
	Issue();
	Issue(const char* subjct[10], const char* typ[15], const char* descript);
	void setSubject();
	void setType();
	void getSubject();
	void getType();
  void addStudent(student s1, student s2)
  {
    student[0]= s1;
    student[1]= s2;
  }
	~Issue();
};
