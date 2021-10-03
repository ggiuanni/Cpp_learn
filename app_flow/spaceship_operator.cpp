#include <iostream>
#include <cstdlib>

int main()
{
    // This operator returns:
    // -1 if a < b
    //  0 if a == b
    //  1 if a > b
    std::strong_ordering result = 1 <=> 1;

    bool out1 = result < 0;
    bool out2 = result == 0;
    bool out3 = result > 0;
    
    std::cout << out1 << std::endl;
    std::cout << out2 << std::endl;
    std::cout << out3 << std::endl;
}