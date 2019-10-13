#include<iostream>
#include <cstdio>


using namespace std;


int main(){



  /* string firstName = "Robel";
   string lastName  = "Ahammed";
   string fullName;

   cout<<firstName<<endl;
   cout<<lastName<<endl;

   fullName = firstName +" "+ lastName;

   cout<<fullName;


   */


   string firstName;
   string lastName;

   cout<<"Enter your first name:";
   getline(cin,firstName);
   cout<<"Enter your last name:";
   getline(cin,lastName);

   cout<<"your first name is:"<<firstName<<endl;
   cout<<"your last name is:"<<lastName<<endl;



  return 0;

}
