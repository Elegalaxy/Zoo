#ifndef GRASS_H
#define GRASS_H
#include "Animal.h"

class Grass: public Animal{
    private:
        
    public:
        // Constructor
        Grass();
        Grass(std::string n, int a);
        // Function
        void shout();
        void eat();

};

#endif