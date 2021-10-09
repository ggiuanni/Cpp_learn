#include <iostream>
#include "squirrel.h"

Squirrel::Squirrel(string StartName)
{
    cout << "Starting!" << endl;
    Name = StartName;

    MyDinner = new Walnut;
    MyDinner->Size = 30;
}

Squirrel::~Squirrel()
{
    cout << "Cleaning up my mess!" << endl;
    delete MyDinner;
}

void Squirrel::WhatIsMyName()
{
    cout << "My name is " << Name << endl;
}