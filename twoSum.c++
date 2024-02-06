#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                if (nums[i] + nums[j] == target) {
                    return { i, j };
                }
            }
        }
        return {};
    }
};

int main() {
    int n, i, target;
    cout << "Enter the size of the array: ";
    cin >> n;
    vector<int> nums(n);
    cout << "Enter the elements of the array: ";
    for (i = 0; i < n; i++) {
        cin >> nums[i];
    }
    cout << "Enter the target sum: ";
    cin >> target;
    Solution sol;
    vector<int> result = sol.twoSum(nums, target);
    if (result.empty()) {
        cout << "No two elements sum up to " << target << ".";
    } else {
        cout << "The indices of the two elements that sum up to " << target << " are " << result[0] << " and " << result[1] << ".";
    }
    return 0;
}
