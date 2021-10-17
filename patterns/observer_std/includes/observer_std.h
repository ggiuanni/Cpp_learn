#ifndef OBSERVER_STD_H
#define OBSERVER_STD_H

#include <iostream>
#include <list>

class Observer
{
public:
    virtual void Respond() = 0;
};

class Subject
{
protected:
    std::list<Observer *> OList;

public:
    void AddObserver(Observer *Item);
    void RemoveObserver(Observer *Item);
    void Event();
};

#endif