#include<iostream>
#include<conio.h>

using namespace std;

//switch case statement

int main(){

    int number;
   cout<<"please enter a number:";

   cin>>number;

   switch(number){

        case 1: cout<<"one";
        break;
        case 2: cout<<"two";
        break;
        case 3: cout<<"three";
        break;
        case 4: cout<<"four";
        break;
        default: cout<<"its not a number:";
        break;

   }




   //vowel consonant program

   char ch;
   cout<<"please enter a character:";
   cin>>ch;

   ch = tolower(ch);

   switch(ch){

        case 'a': cout<<"vowel";
        break;
        case 'e': cout<<"vowel";
        break;
        case 'i': cout<<"vowel";
        break;
        case 'o': cout<<"vowel";
        break;
        case 'u': cout<<"vowel";
        break;
        default: cout<<"consonant";
   }



   getch();
}
