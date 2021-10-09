#include <iostream>
#include <memory>
#include "pen.h"

using namespace std;

void Inspect(const Pen *Checkitout)
{
    cout << Checkitout->Brand << endl;
}

int main()
{
    Pen FavoritePen;
    FavoritePen.InkColor = blue;
    FavoritePen.ShellColor = grey;
    FavoritePen.CapColor = blue;
    FavoritePen.Style = ballpoint;
    FavoritePen.Length = 5.5;
    FavoritePen.Brand = "Office Depot";
    FavoritePen.InkLevelPercent = 30;

    Pen WorstPen;
    WorstPen.InkColor = red;
    WorstPen.ShellColor = red;
    WorstPen.CapColor = black;
    WorstPen.Style = fountain_pen;
    WorstPen.Length = 5.0;
    WorstPen.Brand = "Parker";
    WorstPen.InkLevelPercent = 60;

    cout << "This is my favorite pen" << endl;
    cout << "Color: " << FavoritePen.InkColor << endl;
    cout << "Brand: " << FavoritePen.Brand << endl;
    cout << "Ink Level: " << FavoritePen.InkLevelPercent
         << "%" << endl;
    FavoritePen.write_on_paper("Hello I am a pen");
    cout << "Ink Level: " << FavoritePen.InkLevelPercent
         << "%" << endl;

    // Using pointers

    Pen *MyPen;
    MyPen = new Pen;
    MyPen->InkColor = red;

    cout << MyPen->InkColor << endl;

    delete MyPen;
    MyPen = 0;

    // Using smart pointers

    unique_ptr<Pen> MyPen2;
    MyPen2.reset(new Pen());
    MyPen2->InkColor = red;
    cout << MyPen2->InkColor << endl;
    MyPen2.reset();

    // Using const parameter

    Pen *MyPen3 = new Pen();
    MyPen3->Brand = "Spy Plus Camera";
    Inspect(MyPen3);

    return 0;
}