#include <iostream>
#include "frozen_food.h"

using namespace std;

int main()
{
    cout << "Thin crust pepperoni" << endl;
    FrozenPizza pepperoni(450, 12, 14);
    pepperoni.DumpInfo();
    cout << "\tPrice: " << pepperoni.GetPrice()
         << " cents" << endl;
    cout << "Deep dish extra-cheese" << endl;
    DeepDishPizza extracheese(650, 21592, 14, 3);
    extracheese.DumpInfo();
    extracheese.DumpDensity();
    cout << "\tPrice: " << extracheese.GetPrice()
         << " cents" << endl;
    return 0;
}