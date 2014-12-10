#include "animal.h"
#include "cat.h"
#include "cow.h"

#include <iostream>
#include <vector>

using namespace std;

int main()
{

    Cat* c=new Cat("jack");
    Cow* n=new Cow("nellie");
    Cat* f=new Cat("fred");
    
    vector<Animal*> zoo;
    
    zoo.push_back(c);
    zoo.push_back(f);
    zoo.push_back(n);
    
    for (Animal* p:zoo){
       cout<<p->getname()<<endl;
       p->makesound();
    }
    
    return 0;
}
