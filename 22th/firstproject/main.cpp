#include <iostream>
#include "myfirstclass.h"

//selection operator


using namespace std;

int main()
{
    myFirstclass obj;
   // obj.display();
   myFirstclass *p = &obj;
   p ->display();




    return 0;
}
