<<<<<<< HEAD
class Program{
  private:
  int programID;
  char programName[20];
  int programDuration;
  double programFee;

  public:
  void set_Program(char pName[], int pID, int pDuration, double pFee);
  void displayProgram();
  ~Program();

}
=======
#define SIZE
class Unregistered_member;
class program;

class program

{
private:
	char progName[20];
	int progId;
	int progDuration;
	double progFee;
	Unregistered_member * UM[SIZE];

public:
	program();
	program(char pname[], int pId, int pduration, double pfee);
	void displayProgram();
	~ program();

};
>>>>>>> origin/main
