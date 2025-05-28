#include <iostream>
#include <vector>

using namespace std;
class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int leftsum = 0, rightsum = 0;
        for(int i = 0;i < nums.size();i++) rightsum += nums[i];
        int total = rightsum;
        for(int i = 0;i < nums.size();i++){
            rightsum = total - leftsum - nums[i];
            if(leftsum == rightsum){
                return i;
            }
            leftsum += nums[i];
        }
        return -1;
    }
};
int main() {
    Solution sol;
    vector<int> nums = {1, 7, 3, 6, 5, 6}; // Example input
    int pivot = sol.pivotIndex(nums);
    cout << "Pivot Index: " << pivot << "\n"; // Output the result: 3
    return 0;
}