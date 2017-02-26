//Member function definitions
#include <string>
#include "student.h"

//Student age
void Student::setAge(double sage)
{
  age = sage;
}

double Student::getAge(void)
{
  return age;
}

//Student name
void Student::setName(std::string sname)
{
 _name = sname;
}

std::string Student::getName(void)
{
 return _name;
}




