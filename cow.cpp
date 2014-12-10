#include "cow.h"
#include <string>
#include <iostream>

using namespace std;

Cow::Cow()
   : Animal()
{
}

Cow::Cow(string iname)
   : Animal(iname)
{

}

void Cow::makesound()
{
   cout<<"MOOOOO"<<endl;
}
   
