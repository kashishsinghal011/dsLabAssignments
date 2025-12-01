#include <iostream>
#include <stack>
#include <string>
using namespace std;


int precedence(char op) {
    if (op == '+' || op == '-') return 1;
    if (op == '*' || op == '/') return 2;
    if (op == '^') return 3;
    return 0;
}

bool isOperator(char c) {
    return (c == '+' || c == '-' || c == '*' || c == '/' || c == '^');
}
bool isOperand(char c) {
    return (isalnum(c));
}
string infixToPostfix(const string &expr) {
    stack<char> st;
    string result;

    for (char c : expr) {
        if (isOperand(c)) {
            result += c;
        }
        else if (c == '(') {
            st.push(c);
        }
        else if (c == ')') {
            while (!st.empty() && st.top() != '(') {
                result += st.top();
                st.pop();
            }
            if (!st.empty()) st.pop(); 
        }
        else if (isOperator(c)) {
            while (!st.empty() && precedence(st.top()) >= precedence(c)) {
                result += st.top();
                st.pop();
            }
            st.push(c);
        }
    }

    while (!st.empty()) {
        result += st.top();
        st.pop();
    }

    return result;
}


int main() {
    string expr;
    cout << "Enter infix expression: ";
    cin >> expr;

    cout << "Postfix expression: " << infixToPostfix(expr) << endl;

    return 0;
}
