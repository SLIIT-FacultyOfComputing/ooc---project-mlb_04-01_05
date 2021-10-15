#include "Workout.h"
#include <iostream>
#include <cstring>
using namespace std;

Workout::Workout(){
  workoutID = 0;
  strcpy(workoutName,"");
                    
  strcpy(workoutDuration,"");
  workoutFee = 0.00;
}
Workout::Workout(int prgID, char prgName[], char prgDuration[], double prgFee){
  workoutID = prgID;
  strcpy(workoutName,prgName);
  strcpy(workoutDuration ,prgDuration);
  workoutFee = prgFee;
}
void setWorkoutDetails(int prgID, char prgName[], char prgDuration[], double prgFee){

}

void Workout::displayWorkoutDetails(){
  cout<<"Workout ID :"<<workoutID<<endl;
  cout<<"Workout Name :"<< workoutName<<endl;
  cout<<"Duration :"<<workoutDuration<<endl;
  cout<<"Fee :"<<workoutFee<<endl;
}
Workout::~Workout(){

}