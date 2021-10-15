#include <iostream>
#include <cstring>
using namespace std;

class Enquiry {
  private:
  int enquiryID;
  char enquiryName[20];
  char enquiryCategory[30];

  public:
  void setadd_enquiry(int penID, char penName[], char penCategory[]);
  void setedit_enquiry(char penName[], penCategory[]);
  void getdelete_enquiry();
  void dispaly_enquiry();
  ~Enquiry();

};