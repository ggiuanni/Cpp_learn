/**
 * @file absolute_value_method.cpp
 * @author Giovanni Cassone (giovanni.csn@gmail.com)
 * @brief Templatizing a Method
 * @version 0.1
 * @date 2024-10-06
 *
 * @copyright Copyright (c) 2024
 *
 */

#include <iostream>

using namespace std;

class MyMath
{
public:
    string name;
    MyMath(string aname) : name(aname) {}
    template <typename T>
    void WriteAbsoluteValue(T x)
    {
        cout << "Hello " << name << endl;
        if (x >= 0)
            cout << x << endl;
        else
            cout << -x << endl;
    }
};

int main()
{
    MyMath inst = string("George");
    inst.WriteAbsoluteValue(-50.5);
    inst.WriteAbsoluteValue(-35);
    return 0;
}