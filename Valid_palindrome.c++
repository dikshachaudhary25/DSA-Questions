#include <iostream>
#include <string>
#include <cctype> 

using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        int a = s.length();
        if (a == 0) {
            return true;
        }
        string t;
        for (int i = 0; i < a; i++) {
            if (isalnum(s[i])) {
                t += tolower(s[i]);
            }
        }
        int b = t.length();
        string d;
        for (int j = b - 1; j >= 0; j--) {
            d += t[j];
        }
        if (d == t) {
            return true;
        } else {
            return false;
        }
    }
};

int main() {
    Solution sol;
    string input;
    cout << "Enter a string: ";
    getline(cin, input);
    if (sol.isPalindrome(input)) {
        cout << input << " is a palindrome." << endl;
    } else {
        cout << input << " is not a palindrome." << endl;
    }
    return 0;
}
