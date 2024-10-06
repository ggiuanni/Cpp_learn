/**
 * @file typedef_template.cpp
 * @author Giovanni Cassone (giovanni.csn@gmail.com)
 * @brief Typedefing a Template
 * @version 0.1
 * @date 2024-10-06
 * 
 * @copyright Copyright (c) 2024
 * 
 */

template<typename T>
class Cluck {
    public:
    T Chicken;
};

typedef Cluck<int> CluckNum;

int main(int argc, char const *argv[])
{
    CluckNum foghorn;
    foghorn.Chicken = 1;
    
    return 0;
}
