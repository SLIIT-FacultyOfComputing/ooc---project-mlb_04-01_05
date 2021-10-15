class Workout{
private:
  int workoutID;
  char workoutName[20];
  char workoutDuration[20];
  double workoutFee;
public:
  Workout();
  Workout(int prgID, char prgName[], char prgDuration[], double prgFee);
  void setWorkoutDetails(int prgID, char prgName[], char prgDuration[], double prgFee);
  void displayWorkoutDetails();
  ~Workout();
};