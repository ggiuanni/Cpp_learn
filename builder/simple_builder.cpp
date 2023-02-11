#include <iostream>
#include "html_element.h"

using namespace std;

int main()
{
    HtmlElement elem = HtmlElement::build("ul").add_child("li", "hello").add_child("li", "world");
    cout << elem.str() << endl;

    return 0;
}