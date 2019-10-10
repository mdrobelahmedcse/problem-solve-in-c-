#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){

    while(1){

       int randomNumber,guessNumber;
       cout<<"enter you guessing number in 1 and 5:"<<endl;
       cin>>guessNumber;
       randomNumber = rand()%5+1;
         if(guessNumber == randomNumber){

            cout<<"you have won"<<endl;

        }else{

            cout<<"you have lost,please try again"<<endl;
            cout<<"the random number was:"<<randomNumber<<endl;
        }
    }

 return 0;
}
