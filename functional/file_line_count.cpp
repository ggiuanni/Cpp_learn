#include <iostream>
#include <fstream>
#include <algorithm>

using namespace std;

int LineCount1(string filename)
{
    int lineCount = 0;
    char c = ' ';
    ifstream thisFile(filename);
    while (thisFile.get(c))
    {
        if (c == '\n')
            lineCount++;
    }
    thisFile.close();
    return lineCount;
}

/*
When you call the two functions in main() , you get the same output. Line-
Count2() actually does appear to have no state. However, unlike the constant
expression example in Listing 1-3, count() doesn’t perform the calculation dur-
ing compile time. Doing so would be impossible because the number of times a
newline in Temp.txt could change before the application runs. Consequently, the
method shown in LineCount2() hides the use of state, but state information still
resides at lower levels in the application. Unfortunately, this is about the best
you’re going to get from C++ in the way of state elimination.
*/
int LineCount2(string filename)
{
    ifstream thisFile(filename);
    return count(
        istreambuf_iterator<char>(thisFile),
        istreambuf_iterator<char>(), '\n');
}

int main()
{
    const string filename = "Temp.txt";
    cout << LineCount1(filename) << endl;
    cout << LineCount2(filename) << endl;
}