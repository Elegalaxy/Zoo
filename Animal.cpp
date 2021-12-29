#include "Animal.h"
#include <iostream>
using namespace std;

Animal::Animal(){
    name = "";
    age = 0;
}

// Normal Constructor
Animal::Animal(string n, int a){
    name = n;
    age = a;
}

// One line constructor
// Animal::Animal(string n, int a): name{n}, age{a} {};

void Animal::func(){
    cout << "This is " << name << endl;
}

void Animal::shout(){
    cout << "Animal shout" << endl;
}

// Getter
std::string Animal::get_name(){
    return name;
}

int Animal::get_age(){
    return age;
}

// Setter
void Animal::set_name(std::string n){
    name = n;
}
int Animal::get_age(int a){
    age = a;
}
