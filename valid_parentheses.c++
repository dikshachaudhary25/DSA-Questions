#include <iostream>
#include <stack>
#include <string>
using namespace std;
class Solution {
public:
    bool isValid(string s) {
        stack<char> stack;
        int n = s.length();
        for (int i = 0; i < n; i++) {
            char ch = s[i];
            if (ch == '(' || ch == '{' || ch == '[') {
                stack.push(ch);
            } else {
                if (stack.empty()) {
                    return false;
                }
                char top = stack.top();
                stack.pop();
                if (ch == ')' && top != '(') {
                    return false;
                }
                if (ch == '}' && top != '{') {
                    return false;
                }
                if (ch == ']' && top != '[') {
                    return false;
                }
            }
        }
        return stack.empty();
    }
};

int main() {
    Solution solution;
    cout << "Enter a string: ";
    string input;
    getline(cin, input);
    bool result = solution.isValid(input);
    if (result) {
        cout << "The string contains valid pairs.\n";
    } else {
        cout << "The string does not contain valid pairs.\n";
    }
    return 0;
}
