#include<iostream>
#include<iomanip>
#include<conio.h>

using namespace std;

//area of triangle area = 1/2*base*height;

int main(){

   double base,height;

   cout<<"Enter base: ";
   cin>>base;

   cout<<"Enter height: ";
   cin>>height;

   double area = 1.0/2*base*height;

   cout<<fixed;
   cout<<setprecision(8);
   cout<<"area of triangle: "<< area <<endl;


   getch();
}
