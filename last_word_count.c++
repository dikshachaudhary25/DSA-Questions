#include <iostream>
#include <cctype>
#include <algorithm>
using namespace std;
class Solution {
    public:
    int lengthOfLastWord(string s) {
        int a=s.length();
        int count=0;
        for(int i=a-1;i>=0;i--){
            if(s[i]==' '){
                s.pop_back();
            }
            else {
                break;
            }
        }
        int d=s.length();
        for(int i=d-1;i>=0;i--){
            int b=s[i];
            
            if(s[i]!=' '){
                count++;
                continue;
            }           
            else if(s[i]==' ')
            {
                break;
            }           
        }
        return count;
    }
};
int main()
{
    Solution solution;
    string input;
    cout << "Enter a string: ";
    getline(cin, input);
    int count=solution.isPalindrome(input); 
        cout << "Letters in last word: " << count << endl;
    return 0;
}
