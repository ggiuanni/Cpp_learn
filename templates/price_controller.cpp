/**
 * @file price_controller.cpp
 * @author Giovanni Cassone (giovanni.csn@gmail.com)
 * @brief Putting different types in the parameter
 * @version 0.1
 * @date 2024-10-06
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <iostream>

using namespace std;

template <typename T>
class SomethingForEveryone
{
public:
    T member;
};

template <int MaxPrice>
class PriceController
{
public:
    int Price;
    void TestPrice(string Name)
    {
        if (Price > MaxPrice)
        {
            cout << Name << " too expensive!" << endl;
        }
    }
};

int main()
{
    SomethingForEveryone<int> JustForMe;
    JustForMe.member = 2;

    cout << JustForMe.member << endl;

    const int FredMaxPrice = 30;
    PriceController<FredMaxPrice> FredsToaster;
    FredsToaster.Price = 15;
    FredsToaster.TestPrice("Toaster");
    PriceController<FredMaxPrice> FredsDrawingSet;
    FredsDrawingSet.Price = 45;
    FredsDrawingSet.TestPrice("Drawing set");

    const int JulieMaxPrice = 60;
    PriceController<JulieMaxPrice> JuliesCar;
    JuliesCar.Price = 80;
    JuliesCar.TestPrice("Car");

    return 0;
};
