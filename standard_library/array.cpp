/**
 * @file array.cpp
 * @author Giovanni Cassone (giovanni.csn@gmail.com)
 * @brief Working with std::array to Overcome array Limitations
 * @version 0.1
 * @date 2024-10-09
 *
 * @copyright Copyright (c) 2024
 *
 */

#include <iostream>
#include <array>
#include <algorithm>
#include <iterator>

using namespace std;

int main()
{
    array<char, 5> Letters = {'a', 'b', 'c', 'd', 'e'};

    for (auto entry : Letters)
        cout << entry << endl;

    reverse_copy(Letters.begin(), Letters.end(),
                 ostream_iterator<char>(cout, " "));

    return 0;
}