#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        string c = to_string(x);
        string b,d;
        int a=c.length();
        for(int i=0;i<a;i++){
            b=c;
        }
        for(int j=a-1;j>=0;j--){
            d+=c[j];
        }
        if(d==b){
            return true;
        }
        else{
            return false;
        }
    }
};

int main()
{
  Solution solution;
  int num;
  cout << "Enter an integer: ";
  cin >> num;
  bool isPal = solution.isPalindrome(num);
    if (isPal) {
        cout << num << " is a palindrome.";
    } else {
        cout << num << " is not a palindrome.";
    }
    
    return 0;
}
