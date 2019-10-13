#include<iostream>
#include<iomanip>
#include<conio.h>

using namespace std;

//temperature converter

int main(){

    double cels,farn;
    cout<<"Enter celsious: ";
    cin>>cels;

   // cout<<fixed;
  //  cout<<setprecision(4);
    farn = 1.8*cels+32;

    cout<<"temperature in fahrenhite: "<< farn <<endl;

   getch();
}
