#include<iostream>
#include<cstring>

using namespace std;

int main(){

  char name1[] = "Robel";
  char name2[] = "robel";
  char name3[] = "Sohel";
  char name4[10];
  cout<<strlen(name1)<<endl;
  cout<<strupr(name1)<<endl;
  cout<<strlwr(name1)<<endl;
  cout<<strcat(name1,name2)<<endl;

  strcpy(name4,name3);

  cout<<name4<<endl;


  int value = strcmp(name1,name2);

  if(value==1)

    cout<<"string are equal"<<endl;

  else

    cout<<"string are not equal"<<endl;


  return 0;
}
