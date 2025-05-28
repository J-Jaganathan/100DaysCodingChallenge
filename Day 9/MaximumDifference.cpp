#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int smallest = nums[0], ans = -1;
        for (int i = 1; i < nums.size(); i++) {
            smallest = min(smallest, nums[i]);
            ans = max(ans, nums[i] - smallest);
        }
        return ans==0?-1: ans; // If no valid difference found, return -1   
    }
};
int main() {
    Solution sol;
    vector<int> nums = {7, 1, 5, 4}; // Example input
    int result = sol.maximumDifference(nums);
    cout << "Maximum Difference: " << result << "\n"; // Output the result: 4
    return 0;
}