// 3) Given a Queue consisting of first n natural numbers (in random order). 
// The task is to check whether the given Queue elements can be arranged in increasing order in another Queue using a stack. 
// The operation allowed are: 
// Push and pop elements from the stack 
// Pop (Or Dequeue) from the given Queue. 
// Push (Or Enqueue) in the another Queue.
// Input : Queue[] = { 5, 1, 2, 3, 4 } 
// Output : Yes
#include <iostream>
#include <queue>
#include <stack>
using namespace std;

string canArrangeQueue(queue<int> q) {
    stack<int> s;
    queue<int> out;
    int n = q.size();
    int expected = 1;
    
    while (!q.empty()) {
        int front = q.front();
        q.pop();
        
        if (front == expected) {
            out.push(front);
            expected++;
        } else {
            while (!s.empty() && s.top() == expected) {
                out.push(s.top());
                s.pop();
                expected++;
            }
            s.push(front);
        }
    }
    
    // Empty the stack
    while (!s.empty()) {
        if (s.top() == expected) {
            out.push(s.top());
            s.pop();
            expected++;
        } else {
            return "No";
        }
    }
    
    return "Yes";
}

int main() {
    queue<int> q;
    int arr[] = {5, 1, 2, 3, 4};
    for (int x : arr) q.push(x);
    
    cout << canArrangeQueue(q) << endl;
    return 0;
}









