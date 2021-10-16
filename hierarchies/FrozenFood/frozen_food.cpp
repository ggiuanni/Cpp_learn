#include <iostream>
#include "frozen_food.h"

using namespace std;

FrozenFood::FrozenFood(int APrice, int AWeight)
{
    Price = APrice;
    Weight = AWeight;
}

int FrozenFood::GetPrice()
{
    return Price;
}

int FrozenFood::GetWeight()
{
    return Weight;
}

FrozenPizza::FrozenPizza(int APrice, int AWeight,
                         int ADiameter) : FrozenFood(APrice, AWeight)
{
    Diameter = ADiameter;
}

void FrozenPizza::DumpInfo()
{
    cout << "\tFrozen pizza info:" << endl;
    cout << "\t\tWeight: " << Weight << " ounces" << endl;
    cout << "\t\tDiameter: " << Diameter << " inches"
         << endl;
}

void FrozenPizza::BakeChemistry()
{
    cout << "I'm getting crispy!" << endl;
}

DeepDishPizza::DeepDishPizza(int APrice, int AWeight,
                             int ADiameter, int AHeight) : FrozenPizza(APrice, AWeight,
                                                                       ADiameter)
{
    Height = AHeight;
}

void DeepDishPizza::DumpDensity()
{
    // Calculate pounds per cubic foot of deep-dish pizza
    cout << "\tDensity: ";
    cout << Weight * 12 * 12 * 12 * 14 /
                (Height * Diameter * 22 * 16);
    cout << " pounds per cubic foot" << endl;
}
