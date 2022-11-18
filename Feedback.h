#pragma once
#include "Staff.h"
#include "Response.h"

class Feedback
{
private:
	int feedbackNo;
	const char* descript;
	Staff* s1;

  Reponse * res; // bi-directional association

public:
	Feedback();
	Feedback(int no, const char* desc);
	void setFeedback();
	void getFeedback();
	~Feedback();
};
