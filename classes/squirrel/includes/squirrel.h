#if !defined(SQUIRREL_H_INCLUDED)
#define SQUIRREL_H_INCLUDED

#include <iostream>

using namespace std;

class Walnut
{
public:
    int Size;
};

class Squirrel
{
private:
    Walnut *MyDinner;
    string Name;

public:
    Squirrel(string StartName);
    ~Squirrel();

    void WhatIsMyName();
};

#endif // SQUIRREL_H_INCLUDED
