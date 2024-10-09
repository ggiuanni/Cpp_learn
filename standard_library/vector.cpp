/**
 * @file vector.cpp
 * @author Giovanni Cassone (giovanni.csn@gmail.com)
 * @brief Vectors as Example of Container Classes
 * @version 0.1
 * @date 2024-10-09
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
    vector<string> names;

    names.push_back("Tom");
    names.push_back("Dick");
    names.push_back("Harry");
    names.push_back("April");
    names.push_back("May");
    names.push_back("June");

    cout << names[0] << endl;
    cout << names[5] << endl;


    return 0;
}
