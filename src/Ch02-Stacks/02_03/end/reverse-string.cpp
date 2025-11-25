#include <iostream>
#include <stack>
#include <string>

using namespace std;

string reverseString(const string &input)
{
    stack<char> reverseStr;
    string reversed = input;

    for (char ch : input)
    {
        reverseStr.push(ch);
    }

    for (size_t i = 0; i < input.length(); i++)
    {
        char ch = reverseStr.top();
        reverseStr.pop();
        reversed[i] = ch;
    }

    return reversed;
}

int main()
{
    string str = "I am here!";
    string revStr = reverseString(str);

    cout << reverseString("Hello, World!") << endl;

    cout << "Original String: " << str << endl;
    cout << "Reversed String: " << revStr << endl;

    return 0;
}
