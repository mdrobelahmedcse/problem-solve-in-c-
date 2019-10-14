#include<iostream>
#include<conio.h>

using namespace std;


/*
  if else statement

*/

int main(){

    int number;

    cout<<"enter a number:";
    cin>>number;


  if(number> 0){

          cout<<"positive"<<endl;
    }

    if(number < 0){

         cout<<"negative"<<endl;
    }

    if(number == 0){

         cout<<"zero"<<endl;
    }





  if(number > 0){
        cout<<"positive"<<endl;
    }else if(number < 0){
        cout<<"negative"<<endl;
    }else{
        cout<<"zero"<<endl;
    }




     if(number % 2== 0){

          cout<<"even"<<endl;

     }else{

          cout<<"odd"<<endl;
     }





   if(number>=33){

           if(number>100){

                cout<<"invalid number"<<endl;

           }else if(number>=80){

                cout<<"A+"<<endl;

           }else if(number>=70){

                cout<<"A"<<endl;

           }else if(number>=60){

                cout<<"A-"<<endl;

           }else if(number>=50){

                cout<<"B";
           }else if(number>=40){

                cout<<"C"<<endl;

           }else if(number>=33){

                cout<<"D"<<endl;
           }

   }else{

       cout<<"fail"<<endl;
   }


    getch();
}
