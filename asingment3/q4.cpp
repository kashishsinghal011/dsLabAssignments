// Write a program for the evaluation of a Postfix expression.

#include <iostream>
#include <stack>
#include <string>
using namespace std;

// Function to perform arithmetic operations
int applyOp(int a, int b, char op) {
    switch (op) {
        case '+': return a + b;
        case '-': return a - b;
        case '*': return a * b;
        case '/': return a / b; // assumes no division by zero
    }
    return 0;
}

// Function to evaluate a postfix expression
int evaluatePostfix(string exp) {
    stack<int> st;

    for (char c : exp) {
        // If operand (digit), push to stack
        if (isdigit(c)) {
            st.push(c - '0'); // convert char to int
        }
        // If operator, pop two operands and apply operator
        else {
            int val2 = st.top(); st.pop();
            int val1 = st.top(); st.pop();

            int result = applyOp(val1, val2, c);
            st.push(result);
        }
    }

    // Final result will be on top of the stack
    return st.top();
}

int main() {
    string postfix;
    cout << "Enter postfix expression (use single-digit numbers): ";
    cin >> postfix;

    int result = evaluatePostfix(postfix);
    cout << "Result = " << result << endl;

    return 0;
}
