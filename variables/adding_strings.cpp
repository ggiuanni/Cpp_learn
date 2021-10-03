#include <iostream>

using namespace std;

int main()
{
    string mystring;
    mystring = "Hi ";
    mystring += "there";
    cout << mystring << endl;

    string first = "hello ";
    string second = "there";
    string third = first + second;
    cout << third << endl;

    return 0;
}