class Unregistered_member;
class program;

class Unregistered_member
{
 private:
	 int webId;
	 char cusName[20];
	 char cusDob[12];
	 int cusContactNo;
	 program* pro;

public:
	Unregistered_member(int pWebId, char pname[], char pdob[], int pcontact);
	void addProgram(program* pro);
	void inputRegistration();
	void displayRegDetails();
	~Unregistered_member();
	
};
