
// Design a stack that supports getMin() in O(1) time and O(1) extra space. 
//       Input: [push(2), push(3), peek(), pop(), getMin(), push(1), getMin()]
//       Output: [3, 2, 1]
#include <iostream>
#include <stack>
using namespace std;

class MinStack {
    stack<long long> st;
    long long minEle;

public:
    void push(int x) {
        if(st.empty()) {
            st.push(x);
            minEle = x;
        }
        else {
            if(x >= minEle) {
                st.push(x);
            } else {
                // encode previous min
                st.push(2LL*x - minEle);
                minEle = x;
            }
        }
    }

    void pop() {
        if(st.empty()) return;

        long long t = st.top(); st.pop();

        if(t < minEle) {
            // decode previous min
            minEle = 2*minEle - t;
        }
    }

    int top() {
        long long t = st.top();
        if(t >= minEle) return t;
        else return minEle; // top is encoded, real value is minEle
    }

    int getMin() {
        return minEle;
    }
};

int main() {
    MinStack s;
    s.push(2);
    s.push(3);
    cout << s.top() << endl;  // 3
    s.pop();
    cout << s.getMin() << endl; // 2
    s.push(1);
    cout << s.getMin() << endl; // 1

    return 0;
}
