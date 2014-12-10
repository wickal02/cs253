//animal.cpp
#include "animal.h"
#include <string>
#include <iostream>

using namespace std;

Animal::Animal()
{
    name = "";
}

Animal::Animal(string iname)
{
   name = iname;
}

string Animal::getname()
{
    return name;
}

void Animal::makesound()
{
     cout<<"Generic Animal Sound"<<endl;
}