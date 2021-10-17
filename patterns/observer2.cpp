#include "observer_auto.h"

int main()
{
    Subject Alarm;
    Police *TJHooker = new Police(&Alarm, "TJ");
    cout << "TJ on the beat" << endl;
    Alarm.Event();
    cout << endl;
    cout << "TJ off for the day" << endl;
    delete TJHooker;
    Alarm.Event();

    return 0;
}