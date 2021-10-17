#include <iostream>
#include "questionnary.h"

Questionnary *Questionnary::m_instance = 0;

Questionnary::Questionnary(const std::string &name) : name_(name)
{
    std::cout << "My name is: " << name_ << std::endl;
}

void Questionnary::createInstance(const std::string &name)
{
    m_instance = new Questionnary(name);
}

void Questionnary::destroyInstance()
{
    delete m_instance;
}

Questionnary *Questionnary::getInstance()
{
    return m_instance;
}
