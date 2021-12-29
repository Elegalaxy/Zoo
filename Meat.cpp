#include "Meat.h"
#include <iostream>
using namespace std;

// Inheritance
Meat::Meat(): Animal(){

}

// Normal Constructor
Meat::Meat(string n, int a): Animal(n, a){

}

void Meat::shout(){
    cout << "Roar" << endl;
}

void Meat::eat(){
    cout << "Eat meat" << endl;
}
