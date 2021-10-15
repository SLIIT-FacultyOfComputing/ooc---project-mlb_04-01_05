class Meal_Plan{
  private:
    int MealID;
    std::string MealName;
    std::string MealDetails;

  public:
    void setAddMeal(int pMealID,std::string pMealName,std::string pMealDetails);
    void setUpdateMeal(int pMealID,std::string pMealName,std::string pMealDetails);
    void setSearchMeal(int pMealID,std::string pMealName);
    void Display();
};