#include "questionnary.h"

int main()
{
    Questionnary::createInstance("Test");
    Questionnary *q = Questionnary::getInstance();
    Questionnary::destroyInstance();
}