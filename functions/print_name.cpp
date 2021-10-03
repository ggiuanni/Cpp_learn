#include <iostream>

using namespace std;

void PrintName(string first, string last)
{
    // this variable is not the same as the "main()" one
    string fullname = first + " " + last;
    cout << fullname << endl;
}

int main()
{
    // this variable is not the same as the "PrintName(...)" one
    string fullname = "Abraham Lincoln";
    PrintName("Thomas", "Jefferson");
    cout << fullname << endl;
    return 0;
}