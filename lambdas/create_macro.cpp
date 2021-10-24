#include <iostream>

using namespace std;

int main()
{
    auto f = [](auto Input)
    { cout << Input << endl; };

    f("Hello");
    f(211);
    f(true);
    f(99 / 3);
    f(char(65));
    f(int(15 / 4));

    return 0;
}