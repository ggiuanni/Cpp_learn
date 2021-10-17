#include "observer_std.h"

void Subject::AddObserver(Observer *Item)
{
    OList.push_back(Item);
}
void Subject::RemoveObserver(Observer *Item)
{
    OList.remove(Item);
}

void Subject::Event()
{
    std::list<Observer *>::iterator iter;
    for (iter = OList.begin(); iter != OList.end(); iter++)
    {
        Observer *item = (*iter);
        item->Respond();
    }
}