#include<iostream>
using namespace std;

//padding array to a function
void displayArray(int number[],int sizeofArray){

    for(int i=0;i<sizeofArray;i++){

        cout<<number[i]<<" ";
    }

}

int main(){

  int number[] = {10,20,30,40,50};
  displayArray(number,5);



  return 0;
}
