/**
 * @file pointer_problem.cpp
 * @author Giovanni Cassone (giovanni.csn@gmail.com)
 * @brief Seeing the Pointer Problem in Action
 * @version 0.1
 * @date 2024-10-19
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    /*
    When you create a vector, it allocates some space for the data you put in.
    When the memory fills with data, the vector resized itself, adding more space.
    To perform this task, vector uses the old memoly-shuffle trick where it firts allocates a bigger chunck of memory;
    then it copies the existing data into the beginning of that bigger chunk of memory,
    and it finally frees the original chunk of memory.
    */
    vector<int> test{1,2,3};

    vector<int>::iterator i1 = test.begin();
    i1++;
    cout << &i1 << endl; // second item address: 0x7fffe22bb8f0

    test.push_back(4);

    vector<int>::iterator i2 = test.begin();
    i2++;
    cout << &i2 << endl; // second item address: 0x7fffe22bb8f8

    // same vector, same item, differend address after the resize brought from the "push_back(4)"

    return 0;
}