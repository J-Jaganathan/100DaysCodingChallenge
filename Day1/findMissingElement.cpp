#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

class Solution {
public:
    int missingNum(const vector<int>& arr) {
        unordered_set<int> Freq(arr.begin(),arr.end());
        int i = 1;
        while(true){
            if(Freq.find(i) == Freq.end()){
                return i;
            }
            i++;
        }
    }
};

int main() {
    Solution sol;
    vector<int> arr = {1, 2, 4, 5, 6};  // Missing 3
    
    cout << "Missing Number: " << sol.missingNum(arr) << "\n";  // Output: 3
    return 0;
}
