#include <iostream>

using namespace std;

int main()
{
    string hello = "Hello";
    for (int i = 0; char c = hello[i]; i++)
    {
        cout << c << endl;
    }

    // using "auto"
    for (int i = 0; auto c = hello[i]; i++)
    {
        cout << c << endl;
    }

    int values[] = {1, 2, 3, 4, 5, 0};
    
    // same syntax of the above loop
    for (int i = 0; auto c = values[i]; i++)
    {
        cout << c << endl;
    }


    return 0;
}