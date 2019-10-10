#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){

   int randomNumber;

   for(int i=0;i<5;i++){

       randomNumber = rand()%5+1;
       cout<<randomNumber<<endl;
   }

   return 0;
}
