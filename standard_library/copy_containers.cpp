/**
 * @file copy_containers.cpp
 * @author Giovanni Cassone (giovanni.csn@gmail.com)
 * @brief Copying Containers Couldn’t Be Easier
 * @version 0.1
 * @date 2024-10-31
 *
 * @copyright Copyright (c) 2024
 *
 */

#include <iostream>
#include <map>

using namespace std;

class Tasty
{
public:
    string Dessert;
};

bool operator<(const Tasty &One, const Tasty &Two)
{
    return One.Dessert < Two.Dessert;
}

class Nutrition
{
public:
    int VitaminC;
    int Potassium;
};

int main()
{
    map<Tasty, Nutrition> ItsGoodForMe;

    Tasty ap = {"Apple Pie"}; // Braces notation!
    Nutrition apn = {7249, 9722};

    Tasty ic = {"Ice Cream"};
    Nutrition icn = {2459, 19754};

    Tasty cc = {"Chocolate Cake"};
    Nutrition ccn = {9653, 24905};

    Tasty ms = {"Milk Shake"};
    Nutrition msn = {46022, 5425};

    ItsGoodForMe[ap] = apn;
    ItsGoodForMe[ic] = icn;
    ItsGoodForMe[cc] = ccn;
    ItsGoodForMe[ms] = msn;

    map<Tasty, Nutrition> Duplicate1 = ItsGoodForMe;
    map<Tasty, Nutrition> Duplicate2(ItsGoodForMe);

    cout << ItsGoodForMe[ap].Potassium << endl;
    cout << Duplicate1[ap].Potassium << endl;
    cout << Duplicate2[ap].Potassium << endl;
    cout << "---" << endl;

    ItsGoodForMe[ap].Potassium = 20;
    Duplicate1[ap].Potassium = 40;

    cout << ItsGoodForMe[ap].Potassium << endl;
    cout << Duplicate1[ap].Potassium << endl;
    cout << Duplicate2[ap].Potassium << endl;

    return 0;
}