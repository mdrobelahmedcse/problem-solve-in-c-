#include<iostream>
#include<conio.h>
#include<iomanip>

using namespace std;

//formating output

/*

1. showpoint
2. noshowpoint
3.setprecision
4.fixed
5.setw

*/

int main(){


   float num1,num2;

   cout<<"enter the two number:"<<endl;

   cin>> num1 >> num2;

   float sum = num1 + num2;


   cout<<showpoint;

   cout<<setw(15)<<"sum = "<<sum<<endl;

    cout<<noshowpoint;

   float sub = num1-num2;

   cout<<setw(15)<<"sub = "<<sub<<endl;

    cout<<fixed;
   cout<<setprecision(2);

   float div = (float)num1/num2;

   cout<<setw(15)<<"div = "<<div<<endl;


   getch();
}

