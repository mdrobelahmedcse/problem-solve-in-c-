#include<iostream>
using namespace std;
//return value from a function
double add(double, double);

int main(){

 double firstNumber, secondNumber, result;
 cout<<"enter the first number:"<<endl;
 cin>>firstNumber;
 cout<<"enter the second number:"<<endl;
 cin>>secondNumber;
 result  = add(firstNumber,secondNumber);
 cout<<result<<endl;

 cout<<"-----------thanks for using our application--------------";


  return 0;
}


double add(double a, double b){
   double sum = a+b;
   return sum;
}
