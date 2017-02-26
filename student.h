//Function declarations
#ifndef STUDENT_H
#define STUDENT_H
#include <string>
class Student{
 
  public:
  double age;

  void setAge (double sage);
  double getAge (void);

  void setName (std::string sname);
  std::string getName (void);
  
  private:
  std::string _name;


};
#endif





