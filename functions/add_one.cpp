#include <iostream>

using namespace std;

int AddOne(int start)
{
    int newnumber = start + 1;
    return newnumber;
}

int main(int argc, char const *argv[])
{
    int testnumber = 20;
    int result = AddOne(testnumber);
    cout << result << endl;
    
    return 0;
}
