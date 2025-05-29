#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

class Solution {
public:
    bool isPalindrome(ListNode* head) {
        if (!head || !head->next) return true;

        ListNode *slow = head, *fast = head;
        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
        }

        ListNode *prev = nullptr, *curr = slow, *temp;
        while (curr) {
            temp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = temp;
        }

        ListNode *first = head, *second = prev;
        while (second) {
            if (first->val != second->val) return false;
            first = first->next;
            second = second->next;
        }
        return true;
    }
};

ListNode* createList(const vector<int>& vals) {
    if (vals.empty()) return nullptr;
    ListNode* head = new ListNode(vals[0]);
    ListNode* current = head;
    for (int i = 1; i < vals.size(); i++) {
        current->next = new ListNode(vals[i]);
        current = current->next;
    }
    return head;
}

int main() {
    vector<int> vals = {1, 2, 2, 1};
    ListNode* head = createList(vals);

    Solution sol;
    cout << (sol.isPalindrome(head) ? "Palindrome" : "Not Palindrome") << endl;
    return 0;
}
