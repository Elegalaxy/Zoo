#include <iostream>
#include <vector>
#include "Zoo.h"
#include "Meat.h"
#include "Grass.h"
using namespace std;

int main(){
    // Object / Instance
    Zoo* zoo = new Zoo();

    vector<Animal*> vec;

    // Animal* animal = new Animal("Animal", 30);
    Animal* a1;
    string s;
    cout << "Lion or Goat?: ";
    cin >> s;

    if(s == "Lion"){
        a1 = new Meat("Lion", 5);
    }else{
        a1 = new Grass("Goat", 15);
    }

    vec.push_back(a1);
    // Meat* lion = new Meat("Lion", 5);
    // Grass* goat = new Grass("Goat", 10);

    // lion->func();
    // lion->shout();
    // lion->eat();

    // goat->func();
    // goat->shout();
    // goat->eat();

    // vec.push_back(lion);
    // vec.push_back(goat);

    for(Animal* i:vec){
        i->func();
        i->shout();
        i->eat();
    }

    return 0;
}