#include<iostream>
using namespace std;

void addition(int a,int b){

    int sum = a+b;
    cout<<"addition of two number is:"<<sum<<endl;
}

int main(){

 int a,b;
 cout<<"please enter the value of a:"<<endl;
 cin>>a;
 cout<<"please enter the value of b:"<<endl;
 cin>>b;
 addition(a,b);


 return 0;
}

