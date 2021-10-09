#include <iostream>
#include "oven.h"

void Oven::TurnOnHeatingElement()
{
    cout << "Heating element is now ON! Be careful!" << endl;
}

void Oven::TurnOffHeatingElement()
{
    cout << "Heating element is now off. Relax!" << endl;
}

void Oven::Bake(int Temperature)
{
    TurnOnHeatingElement();
    cout << "Baking!" << endl;
    TurnOffHeatingElement();
}