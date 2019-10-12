#include<iostream>
using namespace std;

class Student{

   public:
       const int adminssionFee;
       const int examFee;
       int id;


        Student(int x,int y,int z)
        : adminssionFee(x),examFee(y)
        {

             cout<<adminssionFee<<endl;
             cout<<examFee<<endl;
             id = z;
             cout<<"Id = "<<id<<endl;
        }


};

int main(){

  Student s1(1500,500,5);

  return 0;
}
