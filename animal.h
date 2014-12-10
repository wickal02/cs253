#ifndef ANIMAL_H
#define ANIMAL_H

//animal.h

#include <string>

class Animal
{
   private:
      std::string name;
      
   public:
      Animal();
      Animal(std::string iname);
      
      std::string getname();
      
      void makesound();
      
      //virtual void makesound()=0;
};

#endif