#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        // prefixSumCount stores how many times a prefix sum has appeared
        unordered_map<int, int> prefixSumCount;
        
        prefixSumCount[0] = 1;  // base case: prefix sum 0 has appeared once
        
        int prefixSum = 0;
        int count = 0;
        
        for (int num : nums) {
            prefixSum += num;  // update prefix sum
            
            // If (prefixSum - k) has appeared before, that means
            // subarray ending at current index sums to k
            if (prefixSumCount.find(prefixSum - k) != prefixSumCount.end()) {
                count += prefixSumCount[prefixSum - k];
            }
            
            // Record the current prefix sum frequency
            prefixSumCount[prefixSum]++;
        }
        
        return count;
    }
};

// Example usage:
int main() {
    Solution sol;
    vector<int> nums = {1, 1, 1};
    int k = 2;
    cout << sol.subarraySum(nums, k) << "\n";  // Output: 2
    return 0;
}
