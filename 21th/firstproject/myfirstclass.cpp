#include "myfirstclass.h"
#include<iostream>
using namespace std;

myFirstclass :: myFirstclass()
{
    cout<<"constructor is called"<<endl;
}
myFirstclass :: ~myFirstclass()
{
    cout<<"destructor is called"<<endl;
}
void myFirstclass :: display()
{

   cout<<"display is called"<<endl;
}
