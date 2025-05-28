#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> result;
        int top = 0, bottom = matrix.size() - 1;
        int left = 0, right = matrix[0].size() - 1;

        while (left <= right && top <= bottom) {
            for (int i = left; i <= right; i++)
                result.push_back(matrix[top][i]);
            top++;

            for (int i = top; i <= bottom; i++)
                result.push_back(matrix[i][right]);
            right--;

            if (top <= bottom) {
                for (int i = right; i >= left; i--)
                    result.push_back(matrix[bottom][i]);
                bottom--;
            }

            if (left <= right) {
                for (int i = bottom; i >= top; i--)
                    result.push_back(matrix[i][left]);
                left++;
            }
        }
        return result;
    }
};
int main() {
    Solution sol;
    vector<vector<int>> arr = {{1,2,3},{4,5,6},{7,8,9}};
    vector<int> result = sol.spiralOrder(arr);
    
    for (int val : result) {
        cout << val << " ";
    }
    cout << "\n";  // Output: 1 2 3 6 9 8 7 4 5
    // Expected output: 1 2 3 6 9 8 7 4 5
    
    return 0;
}
