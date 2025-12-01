#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
using namespace std;

int main() {
    vector<int> vc = {1, 3, 2, 4};
    vector<int> ans;
    stack<int> st;

    // Traverse from right to left
    for (int i = vc.size() - 1; i >= 0; i--) {

        // Pop all smaller or equal elements
        while (!st.empty() && st.top() <= vc[i]) {
            st.pop();
        }

        // If stack empty → no greater element
        if (st.empty()) {
            ans.push_back(-1);
        }
        else {
            ans.push_back(st.top());
        }

        st.push(vc[i]);
    }

    // Reverse to get correct order
    reverse(ans.begin(), ans.end());

    // Print result
    for (int x : ans) {
        cout << x << " ";
    }
}
