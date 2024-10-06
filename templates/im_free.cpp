/**
 * @file im_free.cpp
 * @author Giovanni Cassone (giovanni.csn@gmail.com)
 * @brief
 * @version 0.1
 * @date 2024-10-05
 *
 * @copyright Copyright (c) 2024
 *
 */

#include <iostream>

using namespace std;

template <typename T>
class ImFree
{
protected:
    T x;

public:
    T &getx();
    void setx(T);
};

template <typename T>
T &ImFree<T>::getx()
{
    return x;
}

template <typename T>
void ImFree<T>::setx(T newx)
{
    x = newx;
}

int main()
{
    ImFree<int> separate;
    separate.setx(10);

    cout << separate.getx() << endl;

    return 0;
}