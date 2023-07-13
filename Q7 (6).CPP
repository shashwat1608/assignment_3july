#include <iostream>
#include <stack>
using namespace std;

bool backspaceCompare(string s, string t) {
    stack<char> stackS, stackT;

    // Build stack for string s
    for (char c : s) {
        if (c != '#')
            stackS.push(c);
        else if (!stackS.empty())
            stackS.pop();
    }

    // Build stack for string t
    for (char c : t) {
        if (c != '#')
            stackT.push(c);
        else if (!stackT.empty())
            stackT.pop();
    }

    // Compare the resulting strings
    while (!stackS.empty() && !stackT.empty()) {
        if (stackS.top() != stackT.top())
            return false;
        stackS.pop();
        stackT.pop();
    }

    // Check if both stacks are empty (strings are equal)
    return stackS.empty() && stackT.empty();
}

int main() {
    string s, t;
    cout << "Enter string s: ";
    cin >> s;
    cout << "Enter string t: ";
    cin >> t;

    if (backspaceCompare(s, t))
        cout << "Strings are equal when typed into empty text editors.";
    else
        cout << "Strings are not equal when typed into empty text editors.";

    return 0;
}
