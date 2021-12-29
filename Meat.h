#ifndef MEAT_H
#define MEAT_H
#include "Animal.h"

class Meat: public Animal{
    private:
        
    public:
        // Constructor
        Meat();
        Meat(std::string n, int a);
        // Function
        void shout();
        void eat();

};

#endif