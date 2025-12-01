#include <bits/stdc++.h>
using namespace std;

void improvedSelectionSort(vector<int>& arr) {
    int n = arr.size();
    int start = 0, end = n - 1;

    while (start < end) {
        int minIndex = start;
        int maxIndex = start;

        // Find min and max between start and end
        for (int i = start; i <= end; i++) {
            if (arr[i] < arr[minIndex]) 
                minIndex = i;
            if (arr[i] > arr[maxIndex]) 
                maxIndex = i;
        }

        // Move the minimum element to the front
        swap(arr[start], arr[minIndex]);

        if (maxIndex == start)
            maxIndex = minIndex;
        swap(arr[end], arr[maxIndex]);
        start++;
        end--;
    }
}

int main() {
    vector<int> arr = {11, 5, 4, 21};

    improvedSelectionSort(arr);

    cout << "Sorted: ";
    for (int x : arr) cout << x << " ";
    return 0;
}
