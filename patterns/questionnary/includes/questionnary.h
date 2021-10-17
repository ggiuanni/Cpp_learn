#include <iostream>

class Questionnary
{
public:
    static void createInstance(const std::string &name);
    static void destroyInstance();
    static Questionnary *getInstance();

private:
    static Questionnary *m_instance;
    Questionnary(const std::string &name);
    std::string name_;
};