/**
 * @file unordered_set.cpp
 * @author Giovanni Cassone (giovanni.csn@gmail.com)
 * @brief Creating and using Unodered Sets
 * @version 0.1
 * @date 2024-10-31
 *
 * @copyright Copyright (c) 2024
 *
 */

#include <iostream>
#include <unordered_set>

using namespace std;

int main()
{
    unordered_set<string> Colors;
    Colors.insert("Red");
    Colors.insert("Green");
    Colors.insert("Blue");

    if (Colors.find("Red") != Colors.end())
        cout << "Found Red!" << endl;

    auto ReturnValue = Colors.emplace("Red");

    if (!ReturnValue.second)
        cout << "Red is Already in Set!" << endl;

    cout << "There are " << Colors.count("Red")
         << " Red entries." << endl;

    ReturnValue = Colors.emplace("Orange");

    if (!ReturnValue.second)
        cout << "Orange is Already in Set!" << endl;
    else
        cout << "Orange Added to Set!" << endl;

    Colors.erase("Red");

    if (Colors.find("Red") != Colors.end())
        cout << "Found Red!" << endl;
    else
        cout << "Red Missing!" << endl;

    return 0;
}