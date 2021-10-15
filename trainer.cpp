<<<<<<< HEAD
#include <iostream>
#include <cstring>
#include "trainer.h"
using namespace std;

void Trainer::setAdd_Details(int pTrainerID, char pTrainerName[], char pTrainerContact[]){
    trainerID = pTrainerID;
    strcpy(trainerName,pTrainerName);
    strcpy(trainerContactNo,pTrainerContact);
}

void Trainer::setEdit_LoginDetails(char pUsername[], char pPassword[]){
     strcpy(trainerUsername,pUsername);
     strcpy(trainerPassword,pPassword);
}

void Trainer::setSearch_Trainers(int pTrainerID[], char pTrainerName[]){
     
}

void Trainer::displayTrainer_Details(){
   cout << "Trainer ID: " << trainerID << endl;
   cout << "Trainer Name: " << trainerName << endl;
   cout << "Trainer Contact No: " << trainerContactNo << endl;
   cout << "Trainer Username: " << trainerUsername << endl;
   cout << "Trainer Password: " << trainerPassword << endl;

}
=======
#include "trainer.h"

void trainer::setAddDetails(int ptrainerId, char ptrainerName[], int ptrainerContact)
{
}

void trainer::setEditLoginDetails(char pUsername[], int pUserPw)
{
}

void trainer::setSearchTrainers(int ptrainerId, char ptrainerName[])
{
}

void trainer::displayTrainer()
{
}
>>>>>>> origin/main
