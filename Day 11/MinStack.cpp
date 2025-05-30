#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;

class MinStack {
private:
    stack<int> s;
    stack<int> min_s;

public:
    void push(int val) {
        s.push(val);
        if (min_s.empty()) min_s.push(val);
        else min_s.push(min(val, min_s.top()));
    }

    void pop() {
        if (!s.empty()) {
            s.pop();
            min_s.pop();
        }
    }

    int top() {
        return s.top();
    }

    int getMin() {
        return min_s.top();
    }

    bool empty() {
        return s.empty();
    }
};

int main() {
    MinStack st;
    int choice, val;

    while (true) {
        cout << "\n1.Push  2.Pop  3.Top  4.GetMin  5.Exit\nEnter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value: ";
                cin >> val;
                st.push(val);
                break;
            case 2:
                st.pop();
                cout << "Top element popped.\n";
                break;
            case 3:
                if (!st.empty())
                    cout << "Top element: " << st.top() << endl;
                else
                    cout << "Stack is empty.\n";
                break;
            case 4:
                if (!st.empty())
                    cout << "Minimum element: " << st.getMin() << endl;
                else
                    cout << "Stack is empty.\n";
                break;
            case 5:
                return 0;
            default:
                cout << "Invalid choice.\n";
        }
    }

    return 0;
}
