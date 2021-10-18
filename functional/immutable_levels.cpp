#include <iostream>

using namespace std;

struct Immutable
{
    int val{1};

    void SayHi(string Name) const
    {
        Name = "Smith";
        // val = 2; not valid
        cout << Name << val << endl;
    }
    void ChangeVal()
    {
        val = 3;
        cout << val << endl;
    }
};

int main()
{
    const Immutable Test;
    // Test.ChangeVal(); // Not valid
    Test.SayHi("Sam");
    return 0;
}
