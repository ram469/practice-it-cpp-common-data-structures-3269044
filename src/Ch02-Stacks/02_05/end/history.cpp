#include <string>
#include <stack>
#include <iostream>
using namespace std;

void visitSite(const string &url, stack<string> &history)
{
    history.push(url);
}

void back(stack<string> &history)
{
    if (!history.empty())
    {
        history.pop();
    }
}

void current(const stack<string> &history)
{
    if (!history.empty())
    {
        cout << history.top() << endl;
    }
}

int main()
{
    stack<string> history;

    visitSite("example.com", history);
    visitSite("openai.com", history);
    visitSite("github.com", history);

    current(history); // Should print "github.com"

    back(history);
    current(history); // Should print "openai.com"

    back(history);
    current(history); // Should print "example.com"

    back(history);
    current(history); // Should not print anything

    return 0;
}