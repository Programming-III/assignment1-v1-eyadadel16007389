#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>
using namespace std;

class Animal {
private :
    string name;
    int age;
    bool isHungry;
public :
    Animal();
    Animal(string name , int age , bool isHungry);
    void display();
    void feed();
    void set_name(string name);
    void set_age(int age);
    string get_name();
    int get_age();
class Mammal :: class Animal {string furcolour};
class Bird ::  class Animal {float wingSpan};
class Reptile :: public Animal{bool isVenomous};


};
#endif // ANIMAL_H_INCLUDED
