/**
 * @file non_type_parm.cpp
 * @author Giovanni Cassone (giovanni.csn@gmail.com)
 * @brief Working with non-type parameters
 * @version 0.1
 * @date 2024-10-06
 *
 * @copyright Copyright (c) 2024
 *
 */

#include <iostream>

using namespace std;

enum StoreType
{
    Red,
    Blue,
    Green
};

template <typename V>
struct StoreOut
{
    V Value;
    StoreType Kind;
};

template <StoreType K, typename V>
class StoreIt
{
protected:
    V Value;
    StoreType Kind = K;

public:
    StoreIt() { Value = 0; }
    StoreIt(V value) { Value = value; }

    StoreOut<V> &getx();
    void setx(StoreType, V);
    string KindToString();
};

template <StoreType K, typename V>
StoreOut<V> &StoreIt<K, V>::getx()
{
    StoreOut<V> *Out = new StoreOut<V>();
    Out->Value = Value;
    Out->Kind = Kind;
    return *Out;
}

template <StoreType K, typename V>
void StoreIt<K, V>::setx(StoreType newT, V newV)
{
    Value = newV;
    Kind = newT;
}

template <StoreType K, typename V>
string StoreIt<K, V>::KindToString()
{
    switch (Kind)
    {
    case Blue:
        return "Blue";
    case Green:
        return "Green";
    case Red:
        return "Red";
    }
    return "Not Found";
}

int main(int argc, char const *argv[])
{
    StoreIt<StoreType::Blue, int> Test1;
    Test1.setx(StoreType::Red, 5);

    StoreIt<StoreType::Red, int> Test2(6);

    cout << Test1.KindToString() << "\t" << Test1.getx().Value << endl;
    if (Test1.KindToString() != "Blue")
        cout << "Test1 storage type changed." << endl;
    if (Test1.KindToString() == Test2.KindToString())
        cout << "Test1 and Test2 are of equal types." << endl;

    return 0;
}
