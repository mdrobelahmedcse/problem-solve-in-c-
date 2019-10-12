#include<iostream>
using namespace std;


//constant object

/*

  for calling constant method need to create constant object,non constant object can not called of constant method

*/

class myClass{


     public:

         void display() const;
         void displaytwo();



};



void myClass :: display() const
{

   cout<<"i am from constant method from display"<<endl;

}


void myClass :: displaytwo()
{

   cout<<"i am from not constant method from displaytwo"<<endl;

}

int main(){

  const myClass obj1;
  obj1.display();
  myClass obj2;
  obj2.displaytwo();

  return 0;
}
