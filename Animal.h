#ifndef ANIMAL_H
#define ANIMAL_H
#include <string>

class Animal{
    private:
        std::string name;
        std::string country;
        std::string nickname;
        int age;

    public:
        // Constructor
        Animal();
        Animal(std::string n, int a);

        // Function
        void func();
        // Virtual function
        // Polymorphsm
        virtual void shout();
        // Pure virtual function
        virtual void eat() = 0;

        // Getter
        std::string get_name();
        int get_age();

        // Setter
        void set_name(std::string n);
        int get_age(int a);
};

#endif