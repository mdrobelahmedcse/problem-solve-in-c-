#include<iostream>
using namespace std;


class Student{

    public:
       int id;
       double gpa;

       void display(){

            cout<< id << " " << gpa <<endl;
       }

       void setvalue(int x, double y){

           id  = x;
           gpa = y;
       }


};


int main(){

  Student Alim,Soparna;

  Alim.setvalue(101,3.44);
  Alim.display();


  Soparna.setvalue(102,3.88);
  Soparna.display();




  return 0;
}
