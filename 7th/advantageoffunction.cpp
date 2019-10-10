#include<iostream>
using namespace std;


void square(int n){

     int square = n*n;
     cout<<"square of "<<n<<":"<<square<<endl;
 }

int main(){

   square(5);
   square(6);
   square(7);
   return 0;
}
