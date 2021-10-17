#ifndef OBSERVER_BASE_H
#define OBSERVER_BASE_H

#include <iostream>

class Observer
{
public:
    virtual void Respond() = 0;
};

class Dog : public Observer
{
public:
    void Respond();
};

class Police : public Observer
{
protected:
    std::string name;

public:
    Police(std::string myname);
    void Respond();
};

class Subject
{
protected:
    int Count;
    Observer *List[100];

public:
    Subject();
    void AddObserver(Observer *Item);
    void RemoveObserver(Observer *Item);
    void Event();
};

#endif