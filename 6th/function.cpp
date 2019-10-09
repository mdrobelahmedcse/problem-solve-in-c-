#include<iostream>
using namespace std;
//set default parameter value
void displey(int a=10, int b=20){
    cout<<a<<endl;
    cout<<b<<endl;
}
int main(){
  displey(25,24);
  return 0;
}
