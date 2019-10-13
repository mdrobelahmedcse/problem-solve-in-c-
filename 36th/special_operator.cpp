#include<iostream>
#include<conio.h>

using namespace std;

/*
  special operator
  sizeof
  comma operator,
*/

int main(){

    int a;
    float f;
    double d;
    char ch;
    char name[20];



    cout<<sizeof(a)<<endl;
    cout<<sizeof(f)<<endl;
    cout<<sizeof(d)<<endl;
    cout<<sizeof(ch)<<endl;
    cout<<sizeof(name)<<endl;


    int num1,num2,sum;

    sum = (num1 = 20,num2=30,sum=num1+num2);

    cout<<sum<<endl;



    getch();
}


