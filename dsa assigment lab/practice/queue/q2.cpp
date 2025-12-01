// 2) Given a queue with random elements, we need to sort it. We are not allowed to use extra space. The operations allowed on queue are: 
//       1. 	 enqueue() : Adds an item to rear of queue. 
// dequeue() : Removes an item from front of queue. 
// isEmpty() : Checks if a queue is empty. 
// Input: 11, 5, 4, 21 
// Output: 4, 5, 11, 21
#include <iostream>
#include <queue>
#include <climits>
using namespace std;

void sortQueue(queue<int> &q) {
    int n = q.size();
    
    for (int i = 0; i < n; i++) {
        int min_val = INT_MAX;
        int size = q.size();
                for (int j = 0; j < size; j++) {
            int curr = q.front();
            q.pop();
            
            if (j < size - i) { // only consider unsorted part
                if (curr < min_val) min_val = curr;
            }
            
            q.push(curr);
        }

        bool found = false;
        for (int j = 0; j < size; j++) {
            int curr = q.front();
            q.pop();
            
            if (curr == min_val && !found && j < size - i) {
                found = true; // skip this min_val
            } else {
                q.push(curr);
            }
        }
        
        // Enqueue the minimum at rear
        q.push(min_val);
    }
}

int main() {
    queue<int> q;
    
    // Input: 11, 5, 4, 21
    q.push(11);
    q.push(5);
    q.push(4);
    q.push(21);
    
    sortQueue(q);
    
    // Print sorted queue
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    
    return 0;
}
