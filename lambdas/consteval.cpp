#include <iostream>

using namespace std;

int main()
{
    auto sqr = [](auto x) consteval { return x * x; };
    constexpr double MySquare = sqr(4.2);
    constexpr auto MySquare2 = sqr(20);

    cout << MySquare << endl;
    cout << MySquare2 << endl;

    return 0;
}