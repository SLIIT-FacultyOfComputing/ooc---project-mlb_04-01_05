class Review{
  private:
    std::string Name;
    std::string Comment;

  public:
    void setName(std::string pName);
    void setComment(std::string pComment);
    std::string getName();
    std::string getComment();
    void Display();
};