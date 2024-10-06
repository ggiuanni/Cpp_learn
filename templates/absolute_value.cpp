/**
 * @file absolute.cpp
 * @author Giovanni Cassone (giovanni.csn@gmail.com)
 * @brief Overloading a Function Template
 * @version 0.1
 * @date 2024-10-06
 *
 * @copyright Copyright (c) 2024
 *
 */

#include <iostream>
using namespace std;
template <typename T>
T AbsoluteValue(T x)
{
    cout << "(using first)" << endl;

    if (x >= 0)
        return x;
    else
        return -x;
}

template <typename T>
T AbsoluteValue(T *x)
{
    cout << "(using second)" << endl;
    if (*x >= 0)
        return *x;
    else
        return -(*x);
}

int main()
{
    int n = -3;
    cout << AbsoluteValue<int>(n) << endl;
    float *xptr = new float(-4.5);
    cout << AbsoluteValue<float>(xptr) << endl;
    cout << AbsoluteValue<float>(10.5) << endl;

    return 0;
}


// Most compilers let you leave out the type in angle brackets in the function template call itself. 

// int main()
// {
//     int n = -3;
//     cout << AbsoluteValue(n) << endl;
//     float *xptr = new float(-4.5);
//     cout << AbsoluteValue(xptr) << endl;
//     cout << AbsoluteValue(10.5) << endl;
//     return 0;
// }

