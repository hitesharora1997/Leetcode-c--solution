#include <iostream>
#include <vector>
#include <string>
#include <stack>

using namespace std;

// Function prototypes
bool exampleFunction(string);

// Main function
int main() {
    // Your code here
    string s = "()[]{}";
    bool x = exampleFunction(s);
    cout << x;
    return 0;
}

// Function definitions
bool exampleFunction(string s) {
    stack<char> a;
    // cout << s.length() << endl;

    for(int i = 0 ; i < s.length() ; i++) {
        if(a.empty()) {
            a.push(s[i]);
        } else if ((a.top() == '(' && s[i] == ')') || (a.top() == '{' && s[i] == '}') || (a.top() == '[' && s[i] == ']')) {
            a.pop();
        } else {
            a.push(s[i]);
        }
    }

   while (!a.empty())
   {
    cout << a.top() << endl;
    a.pop();
   }
   

    if (a.empty()) {
        return true;
    }

    return false;
}