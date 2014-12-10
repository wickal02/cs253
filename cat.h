#ifndef CAT_H
#define CAT_H

#include <string>
#include "animal.h"

class Cat: public Animal
{ private:

  public:
   Cat();
   Cat(std::string iname);
   
   void makesound();
};

#endif
