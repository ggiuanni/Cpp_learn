#if !defined(VEHICLE_H_INCLUDED)
#define VEHICLE_H_INCLUDED

class Vehicle
{
public:
    int NumberOfWheels;
    void Drive();
};

class Toyota : public Vehicle
{
public:
    void MeAndMyToyota();
};

#endif // VEHICLE_H_INCLUDED