#include "Ticket.h"
#include <iostream>
using namespace std;

Ticket::Ticket()
{
	ticketID = 000;
	ticketName[20] = "ITQf";
	rasiedTime[8] = "12:34:56";
	raisedDate[10] = "2022:11:18";
}

Ticket::Ticket(int id, const char* name, const char* time, const char* date)
{
	ticketID = id;
	ticketName[20] = name;
	rasiedTime[8] = time;
	raisedDate[10] = date;
}

void Ticket::setTicket()
{

}
int Ticket::ticket()
{

}
Ticket::~Ticket()
{
	cout << "destructor is running" << endl;
}
