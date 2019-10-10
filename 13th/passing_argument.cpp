#include<iostream>
using namespace std;

//passing argument

void display(int num){

    num = 20;
}

/*
void display(int *num){

    *num = 20;
}

*/
int main(){

  int x;
  x=10;
  cout<<"before calling the function the value of x:"<<x<<endl;
  display(x);
  //display(&x);
  cout<<"after calling the function the value of x:"<<x<<endl;

  return 0;
}
