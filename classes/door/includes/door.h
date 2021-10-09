#if !defined(DOOR_H_INCLUDED)
#define DOOR_H_INCLUDED

#include <iostream>

using namespace std;

class Cat
{
public:
    string name;
};

class Dog
{
public:
    string name;
};

class Human
{
public:
    string name;
};

class Door
{
private:
    int HowManyInside;

public:
    void Start();
    void GoThrough(Cat *acat);
    void GoThrough(Dog *adog);
    void GoThrough(Human *ahuman);
};

#endif // DOOR_H_INCLUDED
