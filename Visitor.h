#ifndef VISITOR_H
#define VISITOR_H

#include <string>
using namespace std;

class Enclosure {
private :
    Animal* animal;
    int capacity;
    int currentCount;
public :
    Enclosure();
    Enclosure(Animal* animal , int capacity , int currentCount);
    void set_capacity(int ca);
    int get_capacity();
    void set_current(int cu);
    int get_current();
    void addAnimal(Animal* a);
    void displayAnimals();
};







#endif
