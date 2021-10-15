#include<iostream>
#include "Unregistered_member.h"
#include<string.h>
using namespace std;


Unregistered_member::Unregistered_member(int pWebId, char pname[], char pdob[], int pcontact)
{
	webId = pWebId;
	strcpy(cusName, pname);
	strcpy(cusDob, pdob);
	cusContactNo = pcontact;
}

void Unregistered_member::addProgram(program* pro)
{

}

void Unregistered_member::inputRegistration()
{
}

void Unregistered_member::displayRegDetails()
{
	cout << "Web ID =" << webId << endl;
	cout << "Member name =" << cusName << endl;
	cout << "Customers date of birth = " << cusDob << endl;
	cout << "Contact No. = " << cusContactNo << endl;
}

Unregistered_member::~Unregistered_member()
{
  
}
