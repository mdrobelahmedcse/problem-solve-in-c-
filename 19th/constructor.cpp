#include<iostream>
using namespace std;

class Student{

       public:
           int id;
           double gpa;

           Student(int x,double y){

               id  = x;
               gpa = y;
           }

           void display(){

                cout<< id << " " << gpa <<endl;
           }


};

int main(){

  Student alim(101,3.44);
  alim.display();

  Student suparna(102,3.88);
  suparna.display();

  return 0;
}
