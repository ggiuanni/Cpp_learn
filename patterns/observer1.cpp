#include "observer_base.h"

int main()
{
    Dog Fido;
    Police TJHooker("TJ");
    Police JoeFriday("Joe");
    Subject Alarm;
    Alarm.AddObserver(&Fido);
    Alarm.AddObserver(&TJHooker);
    Alarm.AddObserver(&JoeFriday);
    Alarm.RemoveObserver(&TJHooker);
    Alarm.Event();
}