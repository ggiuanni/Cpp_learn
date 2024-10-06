/**
 * @file derived.cpp
 * @author Giovanni Cassone (giovanni.csn@gmail.com)
 * @brief Deriving a Class Template from a Class Template
 * @version 0.1
 * @date 2024-10-06
 *
 * @copyright Copyright (c) 2024
 *
 */

#include <iostream>

using namespace std;

template <typename T>
class Base
{
public:
    T a;
};

template <typename T>
class Derived : public Base<T>
{
public:
    T b;
};

void TestInt(Base<int> *inst)
{
    cout << inst->a << endl;
}

void TestDouble(Base<double> *inst)
{
    cout << inst->a << endl;
}

int main()
{
    Base<int> base_int;
    Base<double> base_double;
    Derived<int> derived_int;
    Derived<double> derived_double;

    TestInt(&base_int);
    TestInt(&derived_int);
    TestDouble(&base_double);
    TestDouble(&derived_double);

    /*
    error: cannot convert 'Derived<int>*' to 'Base<double>*' for argument '1' to 'void TestDouble(Base<double>*)'
    */
    // TestDouble(&derived_int);


    return 0;
}