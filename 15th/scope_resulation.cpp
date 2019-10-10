#include<iostream>
using namespace std;

//local and global variable
/*
int x = 20;

void display(){

   cout<<"inside the display function x ="<<x<<endl;
}

int main(){


   cout<<"inside the main function x="<<x<<endl;
   display();

   return 0;
}

*/

int x = 20;


int main(){

    int x = 10;
    :: x = 30;
    cout<< :: x <<endl;


   return 0;
}
