/**
 * @file electricity.cpp
 * @author Giovanni Cassone (giovanni.csn@gmail.com)
 * @brief Using Static Member in a Template
 * @version 0.1
 * @date 2024-10-06
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <iostream>

using namespace std;

template <typename T>
class Electricity
{
public:
    static T charge;
};

/**
 * @brief Declaring storage for static member
 * 
 * @tparam T 
 */
template<typename T>
T Electricity<T>::charge;

int main()
{
    Electricity<int>::charge = 10;
    Electricity<float>::charge = 98.6;

    Electricity<int> inst;
    inst.charge = 22; // overrides the static value of 10 above

    cout << Electricity<int>::charge << endl;
    cout << Electricity<float>::charge << endl;
    cout << inst.charge << endl;

    return 0;
}