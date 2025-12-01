#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
using namespace std;

bool canSortUsingStack(vector<int>& A) {
    vector<int> sortedA = A;
    sort(sortedA.begin(), sortedA.end());   // target final array B

    stack<int> st;
    int j = 0;  // pointer on sorted array

    for (int x : A) {
        st.push(x);

        // while top of stack matches next required element
        while (!st.empty() && st.top() == sortedA[j]) {
            st.pop();
            j++;
        }
    }

    // If all elements were popped in sorted order → success
    return j == sortedA.size();
}

int main() {
    // Testcases
    vector<vector<int>> tests = {
        {2, 4},
        {1243, 4, 1342}
    };

    for (auto& A : tests) {
        if (canSortUsingStack(A))
            cout << "Yes ";
        else
            cout << "No ";
    }

    return 0;
}
