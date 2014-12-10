#ifndef COW_H
#define COW_H

#include <string>
#include "animal.h"

class Cow: public Animal
{ private:

  public:
   Cow();
   Cow(std::string iname);
   
   void makesound();
};

#endif
