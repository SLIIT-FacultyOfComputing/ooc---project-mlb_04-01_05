<<<<<<< HEAD
#include <iostream>
#include <cstring>
#include "program.h"
using namespace std;

void Program::set_Program(char pName[], int pID, int pDuration, double pFee){
  programID = pID;
  strcpy(programName,pName);
  programDuration = pDuration;
  programFee = pFee;

}

void Program::displayProgram(){
   cout << "Program ID: " << programID << endl;
   cout << "Program Name: " << programName << endl;
   cout << "Program Duration: " << programDuration << endl;
   cout << "Program Fee: " << programFee << endl;

}

Program::~Program(){
   cout << "Successful Joined" << endl;
}
=======
#include<iostream>
#include "program.h"
#include<string.h>
using namespace std;

program::program()
{
}

program::program(char pname[], int pId, int pduration, double pfee)
{
}

void program::displayProgram()
{
}

program::~program()
{
}
>>>>>>> origin/main
