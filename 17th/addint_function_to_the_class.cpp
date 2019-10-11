#include<iostream>
using namespace std;


class Student{

    public:
       int id;
       double gpa;

       void display(){

            cout<< id << " " << gpa <<endl;
       }


};


int main(){

  Student Alim,Soparna;

  Alim.id = 101;
  Alim.gpa = 3.44;
  Alim.display();


  Soparna.id = 102;
  Soparna.gpa = 3.88;
  Soparna.display();




  return 0;
}
