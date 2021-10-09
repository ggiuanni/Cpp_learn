#if !defined(OVEN_H_INCLUDED)
#define OVEN_H_INCLUDED

using namespace std;

class Oven
{
private:
    void TurnOnHeatingElement();
    void TurnOffHeatingElement();

public:
    void Bake(int Temperature);
};

#endif // OVEN_H_INCLUDED
