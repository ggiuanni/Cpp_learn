#include <iostream>

using namespace std;

int main()
{
    int x = 0;

    for (int i = 1; i <= 100; i++)
    {
        x += i;
    }

    cout << "X: " << x << endl;

    double y = 0.0;
    for (double i = 0.1; i <= 100; i += 0.1)
    {
        y += i;
    }
    cout << "Y: " << y << endl;

    return 0;
}