#include <iostream>
#include <cstring>
#include "program.h"
using namespace std;

int main()
{
  Program *p1 = new program(001,"90 Days Shred Progarm",1,40,000);
  Program *p2 = new program(002,"Mass Gainer Program",2,35,000);

  Trainer *t1 = new trainer(10,"Lohan Bandara",0741245620);

  p1-> displayprogram();
  p2-> displayprogram();
  cout << "" << endl;

 return 0;
}