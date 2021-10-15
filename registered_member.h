#pragma once
class registered_member;
class trainer;

class Registered_member
{
private:
	int userId;
	char userName[20];
	int userPw;
	int workoutType;
	int workoutDuration;
	trainer* t1;

public:
	Registered_member();
	Registered_member(int puserId, char puserName[], int puserPw);
	void addTrainer(trainer*pt1);
	void setWorkoutDetails();
	~Registered_member();
};
