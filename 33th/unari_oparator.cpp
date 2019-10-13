#include<iostream>
#include<conio.h>

using namespace std;


/*

unary operator

    unary  +
    unary -
    unary increment ++
    unary decrement --

    prefix increment ++x
    postfix increment x++

     prefix decrement -x
     postfix decrement x--

*/

int main(){

   int x = 3;
   cout<<"x = "<<x<<endl;

   int y = x--;

   cout<<"y = "<<y<<endl;
   cout<<"x = "<<x<<endl;


   int a = 10;

   cout<<"a = "<< a <<endl;

   int b = --a;

   cout<< "b = " << b <<endl;
   cout<< "a = " << a <<endl;


   int c = 10;
   int d = -c;
   cout<<"c = "<<c<<endl;
   cout<<"d = "<<d<<endl;

   getch();
}
