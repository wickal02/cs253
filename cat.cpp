#include "cat.h"
#include <string>
#include <iostream>

using namespace std;

Cat::Cat()
   : Animal()
{
}

Cat::Cat(string iname)
   : Animal(iname)
{

}

void Cat::makesound()
{
   cout<<"MEOW"<<endl;
}
