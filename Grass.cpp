#include "Grass.h"
#include <iostream>
using namespace std;

Grass::Grass(): Animal(){

}

// Normal Constructor
Grass::Grass(string n, int a): Animal(n, a){

}

void Grass::shout(){
    cout << "Meh" << endl;
}

void Grass::eat(){
    cout << "Eat grass" << endl;
}
