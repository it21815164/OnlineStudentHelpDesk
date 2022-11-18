#include "Feedback.h"
#include <iostream>
using namespace std;

Feedback::Feedback() 
{
	feedbackNo = 001;
	descript = "feedback description";
}

Feedback::Feedback(int no, const char* desc)
{
	feedbackNo = no;
	descript = desc;
}

void Feedback::setFeedback()
{

}

void feedback::getFeedback()
{

}

Feedback::~Feedback()
{
	cout << "destructor is running" << endl;
}
