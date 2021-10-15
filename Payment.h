class Payment{
private:
  int paymentID;
  char paymentType[20];
  int date;
  double paymentAmount;
public:
  Payment();
  Payment(int pID, char pType[], int pDate, double pAmount);
  void setPaymentDetails(int pID, char pType[], int pDate, double pAmount);
  void displayPaymentDetails();
  ~Payment();
};
