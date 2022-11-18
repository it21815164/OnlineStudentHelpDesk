#pragma once
#include "Issue.h"
#include "Response.h"
#define SIZE 10

class Ticket
{
private:
	int ticketID;
	const char* ticketName[20];
	const char* rasiedTime[8];
	const char* raisedDate[10];
	Issue* issues[1];


public:
	Ticket();
	Ticket(int id, const char* name, const char* time, const char* date);
	void setTicket(int id, const char* name, const char* time, const char* date, Response* r1);

issues[0] = new issues[];

	int ticket();
	~Ticket();
};
