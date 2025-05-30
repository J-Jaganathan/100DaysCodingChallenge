#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

bool isValid(string s) {
    unordered_map<char, char> parenmap = {{'(', ')'}, {'{', '}'}, {'[', ']'}};
    char preq[10000];
    int top = -1;

    for (char ch : s) {
        if (parenmap.count(ch)) {
            preq[++top] = ch;
        } else {
            if (top == -1) return false;
            char leftbracket = preq[top--];
            if (parenmap[leftbracket] != ch) return false;
        }
    }

    return top == -1;
}

int main() {
    string input;
    cout << "Enter a string of parentheses: ";
    cin >> input;

    if (isValid(input))
        cout << "Valid parentheses." << endl;
    else
        cout << "Invalid parentheses." << endl;

    return 0;
}
