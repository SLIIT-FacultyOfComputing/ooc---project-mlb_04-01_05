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