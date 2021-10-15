<<<<<<< HEAD
class Trainer{
   private:
   int trainerID;
   char trainerName[10];
   char trainerContactNo[10];
   char trainerUsername[15];
   char trainerPassword[10];
  
  public:
  void setAdd_Details(int pTrainerID, char pTrainerName[], char pTrainerContact[]);
  void setEdit_LoginDetails(char pUsername[], char pPassword[]);
  void setSearch_Trainers(int pTrainerID[], char pTrainerName[]);
  void displayTrainer_Details();
  ~Trainer();
};
=======
#pragma once
class trainer
{
private:
	int tainerId;
	char trainerName[20];
	int trainerContact;
	char trainerUsername[20];
	int trainerPw;

public:
	void setAddDetails(int ptrainerId, char ptrainerName[], int ptrainerContact);
	void setEditLoginDetails(char pUsername[], int pUserPw);
	void setSearchTrainers(int ptrainerId, char ptrainerName[]);
	void displayTrainer();
>>>>>>> origin/main
