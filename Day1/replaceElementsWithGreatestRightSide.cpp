#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n = arr.size();
        int maxSoFar = -1;  // Last element has no element on right
        
        // Traverse from right to left
        for (int i = n - 1; i >= 0; --i) {
            int current = arr[i];  // Store current value
            
            arr[i] = maxSoFar;  // Replace current with maxSoFar (greatest on right)
            
            // Update maxSoFar if current is greater
            if (current > maxSoFar) {
                maxSoFar = current;
            }
        }
        
        return arr;
    }
};

// Example usage:
int main() {
    Solution sol;
    vector<int> arr = {17,18,5,4,6,1};
    vector<int> result = sol.replaceElements(arr);
    
    for (int val : result) {
        cout << val << " ";
    }
    cout << "\n";  // Output: 18 6 6 6 1 -1
    
    return 0;
}
