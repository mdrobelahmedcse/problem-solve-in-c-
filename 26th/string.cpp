#include<iostream>
#include<stdio.h>

using namespace std;


int main(){

 //  char name[6] = {'h','e','l','l','o'};
 //  cout<<name;


 //  char name[] = {'h','e','l','l','o','\0'};
 //  cout<<name[1];

    char name[30];
    cout<<"Enter your name:";
    gets(name);
    cout<<"Hello "<<name;




  return 0;
}
