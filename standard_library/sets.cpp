/**
 * @file set.cpp
 * @author Giovanni Cassone (giovanni.csn@gmail.com)
 * @brief Using set to Look up Items
 * @version 0.1
 * @date 2024-10-19
 *
 * @copyright Copyright (c) 2024
 *
 */

/*
Set VS Map: sets and maps have quite the same features, the main difference is that maps need Keys in addition.
*/

#include <iostream>
#include <set>

using namespace std;

class Emp
{
public:
    string Nickname;
    string SSN;

    Emp(string anickname, string asocial) : Nickname(anickname), SSN(asocial) {}
    Emp() : Nickname(""), SSN("") {}

};

bool operator < (const Emp& first, const Emp& second)
{
    return first.SSN < second.SSN;
}

ostream& operator<< (ostream &out, const Emp &emp)
{
    cout << "(" << emp.Nickname;
    cout << "," << emp.SSN;
    cout << ")";
    return out;
};

int main(int argc, char const *argv[])
{
    set<Emp> employees;

    Emp emp1("sparky", "123-22-8572");
    employees.insert(emp1);
    Emp emp2("buzz", "234-33-5784");
    employees.insert(emp2);
    Emp emp3("albert", "123-22-8572"); // same SSN, it will not be added
    employees.insert(emp3);
    Emp emp4("sputz", "199-19-0000");
    employees.insert(emp4);

    // List the items
    set<Emp>::iterator iter = employees.begin();
    while (iter != employees.end()) // will show ordered by SSN, since the operator < function above
    {
        cout << *iter << endl;
        iter++;
    }
    
    // Find an item
    cout << "Finding..." << endl;
    Emp findemp("", "123-22-8572"); // will find sparky
    iter = employees.find(findemp);
    cout << *iter << endl;
    
    return 0;
}
