#include <string>
#include <stack>
#include <iostream>
using namespace std;

class BrowserHistory
{

private:
    stack<string> history;

public:
    void visit(const string url);
    void back();
    void current();
};

void BrowserHistory::visit(const string url)
{
    history.push(url);
}

void BrowserHistory::back()
{
    if (!history.empty())
    {
        history.pop();
    }
}

void BrowserHistory::current()
{
    if (!history.empty())
    {
        cout << history.top() << endl;
    }
}

int main()
{

    BrowserHistory history;
    history.visit("example.com");
    history.visit("openai.com");
    history.visit("github.com");

    history.current(); // Should print "github.com"

    history.back();
    history.current(); // Should print "openai.com"

    history.back();
    history.current(); // Should print "example.com"

    history.back();
    history.current(); // Should not print anything

    return 0;
}
