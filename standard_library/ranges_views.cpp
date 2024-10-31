/**
 * @file range.cpp
 * @author Giovanni Cassone (giovanni.csn@gmail.com)
 * @brief Working with Ranges and Views
 * @version 0.1
 * @date 2024-10-31
 *
 * @copyright Copyright (c) 2024
 *
 */

#include <iostream>
#include <vector>
#include <ranges>

using namespace std;

int main()
{
    vector<int> MyList{9, 2, 1, 6, 3, 8, 4};

    cout << "There are " << ranges::size(MyList) << " items in MyList" << endl;

    auto Filtered = MyList | views::filter([](int n)
                                           { return n % 3 == 0; }); // iterates each element (n) in MyList and returns the ones that make true the assumption

    cout << "Items divisible by 3: " << endl;

    for (int i : Filtered)
        cout << i << endl;

    return 0;
}