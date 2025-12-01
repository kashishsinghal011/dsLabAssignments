#include <iostream>
#include <vector>
using namespace std;

void duplicateTwos(vector<int>& arr) {
    int n = arr.size();

    for (int i = n - 1; i >= 0; i--) {
        // If element is 2
        if (arr[i] == 2) {
            // Duplicate 2 if there is space
            if (i + 1 < n) arr[i + 1] = 2;
        }
        if (i + 1 < n) arr[i + 1] = arr[i];
    }
}

int main() {
    vector<int> arr = {1, 2, 3, 2, 4};
    duplicateTwos(arr);

    for (int x : arr) cout << x << " ";
    cout << endl;

    return 0;
}
