#include<iostream>
using namespace std;

//recursion function

int fact(int n){

     if(n==1)

        return 1;
     else

        return n*fact(n-1);
}

int main(){

  int factorial,n;
  cout<<"please enter a number:"<<endl;
  cin>>n;
  factorial = fact(n);
  cout<<"the factorial of n is: "<<factorial<<endl;

  return 0;
}
