//Classes and Objects program v1.0
//2017 Amar Tufo
#include <iostream>
#include "student.h"

using namespace std;
int main()
{
  //creating object
  Student student;
  
  student.setName("Amar");
  student.setAge(24);
  
  cout <<"Reading Student data"<<endl;
  cout <<"\n Name: " <<student.getName();
  cout <<"\n Age: " <<student.getAge(); cout<<endl;
  cout <<endl;
  return 0;
}




