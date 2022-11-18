#include <iostream>
#include "Feedback.h"
#include "Issue.h"
#include "Lecturer.h"
#include "ReadingMaterials.h"
#include "Response.h"
#include "Staff.h"
#include "Student.h"
#include "Ticket.h"

using namespace std;

int main() {
  Feedback *f1;
  f1 = new Feedback("123","Problem solved");
  f1->setFeedback();
  f1->getFeedback();

  Issue *i1;
  i1= new Issue("Tech issue","Technical","PC turned off");
  i1->setType();
  i1->setType();
  i1->getSubject();
  i1->getType();

  
  Lecturer l1("ITSE111");
  l1.addMaterials();

  ReadingMaterials *material;
	material = new ReadingMaterials("m12","Faculty of Computing","How to enrol for a module","");
    material-> setFaculty();
	material-> getMaterilNo();
	material-> setLink();

  Response *r1;
	r1= new Response("We'll contact you if needed");
	r1->setdescription();
	r1->getdescription();

 Staff *s1;
	s1= new Staff("122","Kamal","kamal128","kl00112131");
	s1->manageProfile();
	s1->respondTicket();
	s1->checkFeedback();

  //call the class student
 Student st1("IT344","Dilmi","IT1111");
	st1.setStudentDetails();
	st1.raiseTicket();
	st1.deleteTicket();
	st1.checkTicket();
	st1.manageProfile();

  //call the class ticket
 Ticket *t1;
	t1 new Ticket=("T1088","Tech","12:34:56","2022:11:18");
	t1->ticket();

  //deleting dynamic object
delete f1;
delete i1;
delete material;
delete r1;
delete s1;
delete t1;	

	return 0;
}
