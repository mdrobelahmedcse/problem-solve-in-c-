#include<iostream>
using namespace std;


class Student{

    public:
       int id;
       double gpa;


};


int main(){

  Student Alim,Soparna;

  Alim.id = 101;
  Alim.gpa = 3.44;

  cout<<Alim.id<< " "<< Alim.gpa <<endl;

  Soparna.id = 102;
  Soparna.gpa = 3.88;

  cout<<Soparna.id<< " " <<Soparna.gpa<<endl;



  return 0;
}
