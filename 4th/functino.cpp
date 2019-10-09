#include<iostream>
using namespace std;

void add(int,int);
void sub(int,int);
void mul(int,int);
void div(int,int);


int main(){

  int firstNumber,secondNumber;
  cout<<"enter the first number:"<<endl;
  cin>>firstNumber;
  cout<<"enter the second number:"<<endl;
  cin>>secondNumber;
  add(firstNumber,secondNumber);
  sub(firstNumber,secondNumber);
  mul(firstNumber,secondNumber);
  div(firstNumber,secondNumber);

  cout<<"----------------thanks for using for our programm----------------"<<endl;

  return 0;
}


void add(int a,int b){
   int sum = a+b;
   cout<<"the addition of two number is:"<<sum<<endl;
}

void sub(int a,int b){

    int sub = a-b;
    cout<<"the sub of two number is:"<<sub<<endl;
}

void mul(int a,int b){

     int mul = a*b;
     cout<<"the mul of two number is :"<<mul<<endl;
}

void div(int a,int b){

     int div = a/b;
     cout<<"the div of two number is:"<<div<<endl;
}


























