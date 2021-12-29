#ifndef ZOO_H
#define ZOO_H
#include <vector>
#include "Grass.h"
#include "Meat.h"

class Zoo{
    public:
        Zoo();
        std::vector<Grass*> grass;
        std::vector<Meat*> meat;

};

#endif