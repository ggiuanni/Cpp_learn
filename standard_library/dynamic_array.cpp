/**
 * @file dynamic_array.cpp
 * @author Giovanni Cassone (giovanni.csn@gmail.com)
 * @brief Creating and Using Dynamic Arrays
 * @version 0.1
 * @date 2024-10-31
 *
 * @copyright Copyright (c) 2024
 *
 */

#include <iostream>
#include <new>

using namespace std;

int main()
{
    int HowMany;
    int *DynArray;

    cout << "How many numbers would you like?" << endl;
    cin >> HowMany;

    DynArray = new (nothrow) int[HowMany];

    if (DynArray == nullptr)
        cout << "Error: Could not allocate memory!";
    else
    {
        for (int i = 0; i < HowMany; i++)
            DynArray[i] = i;

        cout << "Displaying entries:" << endl;

        for (int i = 0; i < HowMany; i++)
            cout << DynArray[i] << endl;

        delete[] DynArray;
    }

    return 0;
}