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