#include <iostream>
#include <queue>
using namespace std;

class MyStack {
    queue<int> q;
public:
    void push(int x) {
        q.push(x);
        int s = q.size();
        for (int i = 0; i < s - 1; ++i) {
            q.push(q.front());
            q.pop();
        }
    }

    int pop() {
        int el = q.front();
        q.pop();
        return el;
    }

    int top() {
        return q.front();
    }

    bool empty() {
        return q.empty();
    }
};

int main() {
    MyStack st;

    st.push(10);
    st.push(20);
    st.push(30);

    cout << "Top: " << st.top() << endl; // 30
    cout << "Pop: " << st.pop() << endl; // 30
    cout << "Top: " << st.top() << endl; // 20
    cout << "Is Empty: " << (st.empty() ? "Yes" : "No") << endl; // No

    return 0;
}
