#include <string>
#include <vector>

using namespace std;

struct HtmlBuilder;

struct HtmlElement
{
    string name, text;
    vector<HtmlElement> elements;
    const size_t indent_size = 2;

    HtmlElement();
    HtmlElement(const string &name, const string &text);

    string str(int indent = 0) const;

    static HtmlBuilder build(string root_name);
};

struct HtmlBuilder
{
    HtmlElement root;

    HtmlBuilder(string root_name);
    HtmlBuilder &add_child(string child_name, string child_text);

    string str() const;

    operator HtmlElement() const;
};