#include "observer_base.h"

void Dog::Respond()
{
    std::cout << "Bark bark" << std::endl;
}

Police::Police(std::string myname) : name(myname){};

void Police::Respond()
{
    std::cout << name << ": 'Drop the weapon! Now!'" << std::endl;
}

Subject::Subject()
{
    Count = 0;
}

void Subject::AddObserver(Observer *Item)
{
    List[Count] = Item;
    Count++;
}

void Subject::RemoveObserver(Observer *Item)
{
    int i;
    bool found = false;
    for (i = 0; i < Count; i++)
    {
        if (!found && List[i] == Item)
        {
            found = true;
            List[i] = List[i + 1];
        }
    }
    if (found)
    {
        Count--;
    }
}

void Subject::Event()
{
    int i;
    for (i = 0; i < Count; i++)
    {
        List[i]->Respond();
    }
}