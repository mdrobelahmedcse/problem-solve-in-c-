#include<iostream>
#include<conio.h>

using namespace std;

/*
   a = 32                                  32   16    8    4    2   1
   b = 12                         32  =   1     0     0    0    0   0
                                      12  =   0    0     1     1    0   0


*/
int main(){

  int a = 32;
  int b = 12;
  int c;

  c = a & b;

  cout << c << endl;

   c = a | b;

   cout << c << endl;

   c = a ^ b;

   cout << c << endl;

   getch();
}
