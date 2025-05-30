#include <iostream>
#include <vector>
#include <stack>
#include <unordered_map>
using namespace std;

vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
    unordered_map<int, int> next;
    stack<int> stk;

    for (int num : nums2) {
        while (!stk.empty() && stk.top() < num) {
            next[stk.top()] = num;
            stk.pop();
        }
        stk.push(num);
    }

    vector<int> result;
    for (int num : nums1) {
        result.push_back(next.count(num) ? next[num] : -1);
    }
    return result;
}

int main() {
    int n1, n2;
    cout << "Enter size of nums1: ";
    cin >> n1;
    vector<int> nums1(n1);
    cout << "Enter elements of nums1: ";
    for (int& x : nums1) cin >> x;

    cout << "Enter size of nums2: ";
    cin >> n2;
    vector<int> nums2(n2);
    cout << "Enter elements of nums2: ";
    for (int& x : nums2) cin >> x;

    vector<int> result = nextGreaterElement(nums1, nums2);
    cout << "Next greater elements: ";
    for (int x : result) cout << x << " ";
    cout << endl;

    return 0;
}
