#include "Payment.h"
#include <iostream>
#include <cstring>
using namespace std;

Payment::Payment(){
  paymentID = 0;
  strcpy(paymentType,"");
  date = 0;
  paymentAmount = 0.0;
}
Payment::Payment(int pID, char pType[], int pDate, double pAmount){
  paymentID = pID;
  strcpy(paymentType,pType);
  date = pDate;
  paymentAmount = pAmount;
}
void Payment::setPaymentDetails(int pID, char pType[], int pDate, double pAmount){
 
  
}
void Payment::displayPaymentDetails(){
  cout<<"Payment ID :"<<paymentID<<endl;
  cout<<"Payment Type :"<<paymentType<<endl;
  cout<<"Date :"<< date<<endl;
  cout<<"Amount :"<<paymentAmount<<endl;
}
Payment::~Payment(){
  
}