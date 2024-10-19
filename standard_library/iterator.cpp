/**
 * @file iterator.cpp
 * @author Giovanni Cassone (giovanni.csn@gmail.com)
 * @brief Iterating
 * @version 0.1
 * @date 2024-10-19
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main()
{
    // Iterating through a map
    map<string, int> NumberWords;
    NumberWords["ten"] = 10;
    NumberWords["twenty"] = 20;
    NumberWords["thirty"] = 30;

    map<string, int>::iterator loopy = NumberWords.begin();
    while (loopy != NumberWords.end())
    {
        cout << loopy->first << " ";
        cout << loopy->second << endl;
        loopy++;
    }
    
    // Iterating through a vector
    vector<string> Words;
    Words.push_back("hello");
    Words.push_back("there");
    Words.push_back("ladies");
    Words.push_back("and");
    Words.push_back("aliens");

    vector<string>::iterator vectorloop = Words.begin();
    while (vectorloop != Words.end())
    {
        cout << *vectorloop << endl;
        vectorloop++;
    }
    
    return 0;
}