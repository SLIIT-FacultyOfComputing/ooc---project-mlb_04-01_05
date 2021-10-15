#include <iostream>
#include <cstring>
#include "enquiry.h"
using namespace std;


void Enquiry::setadd_enquiry(int penID, char penName[], char penCategory[]){
   enquiryID = penID;
   strcpy(enquiryName,penName);
   strcpy(enquiryCategory,penCategory);
}

void Enquiry::setedit_enquiry(char penName[], penCategory[]){

}

void Enquiry::getdelete_enquiry(){
    return delete_enquiry;
}

void Enquiry::dispaly_enquiry(){
    cout << "Enquiry ID: " << enquiryID << endl;
    cout << "Enquiry Name: " << enquiryName << endl;
    cout << "Enquiry Category: " << enquiryCategory << endl;
}

Enquiry::~Enquiry(){
    cout << "Waiting for your Response" << endl;
}