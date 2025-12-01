
#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int countPairs(vector<int> &arr, int k) {
    unordered_map<int, int> mp;  
    int count = 0;

    for (int x : arr)
        mp[x]++;

    for (auto &p : mp) {
        int x = p.first;

        if (mp.count(x + k)) {
            count += mp[x] * mp[x + k];
        }
    }

    return count;
}

int main() {
    vector<int> arr = {1, 1, 3, 5};
    int k = 2;

    cout << countPairs(arr, k);  
}
