#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        int a = s.length();
        int num = 0;
        for (int i = 0; i < a; i++) {
            if (i + 1 < a) {
                int next = convertCharToInt(s[i + 1]);
                if (convertCharToInt(s[i]) < next) {
                    num -= convertCharToInt(s[i]);
                } else {
                    num += convertCharToInt(s[i]);
                }
            } else {
                num += convertCharToInt(s[i]);
            }
        }
        return num;
    }

private:
    int convertCharToInt(char c) {
        switch (c) {
            case 'I': return 1;
            case 'V': return 5;
            case 'X': return 10;
            case 'L': return 50;
            case 'C': return 100;
            case 'D': return 500;
            case 'M': return 1000;
            default: return 0;
        }
    }
};

int main() {
    Solution sol;
    string s;
    cout << "Enter a Roman numeral string: ";
    cin >> s;
    int result = sol.romanToInt(s);
    cout << "Input: s = " << s << endl;
    cout << "Output: " << result << endl;
    return 0;
}
