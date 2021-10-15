#include <iostream>
#include "Review.h"
#include <cstring>
using namespace std;


void Review::setName(string pName){
  Name=pName;
}
void Review::setComment(string pComment){
  Comment=pComment;
}
string Review::getName(){
  return Name;
}
string Review::getComment(){
  return Comment;
}
void Review::Display(){
  cout << "Your Review"<<endl<<endl;
  cout << "Name : " << getName() << endl;
  cout << "Comment : " <<getComment();
}