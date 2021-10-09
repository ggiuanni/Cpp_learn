#include "door.h"

int main()
{
    Door entrance;
    entrance.Start();

    Cat *SneekyGirl = new Cat;
    SneekyGirl->name = "Sneeky Girl";
    Dog *LittleGeorge = new Dog;
    LittleGeorge->name = "Little George";
    Human *me = new Human;
    me->name = "John";

    entrance.GoThrough(SneekyGirl);
    entrance.GoThrough(LittleGeorge);
    entrance.GoThrough(me);

    delete SneekyGirl;
    delete LittleGeorge;
    delete me;

    return 0;
}