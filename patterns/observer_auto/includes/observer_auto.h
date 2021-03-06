#ifndef OBSERVER_AUTO_H
#define OBSERVER_AUTO_H

#include <iostream>

using namespace std;

class Observer;

class Subject
{
    friend class Observer;

protected:
    int Count;
    Observer *List[100];
    void AddObserver(Observer *Item);
    void RemoveObserver(Observer *Item);

public:
    Subject() { Count = 0; }
    void Event();
};

class Observer
{
protected:
    Subject *subj;

public:
    virtual void Respond() = 0;
    Observer(Subject *asubj)
    {
        subj = asubj;
        subj->AddObserver(this);
    }
    virtual ~Observer() { subj->RemoveObserver(this); }
};

class Dog : public Observer
{
public:
    void Respond();
    Dog(Subject *asubj) : Observer(asubj) {}
};

class Police : public Observer
{
protected:
    string name;

public:
    Police(Subject *asubj, string myname) : Observer(asubj)
    {
        name = myname;
    }
    void Respond();
};

#endif