#include <iostream>
using namespace std;

int main() {
    int arr[] = {5, 3, 2, 4, 1};
    int n = 5, inv = 0;

    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            if (arr[i] > arr[j])
                inv++;

    cout << "Total inversions = " << inv;
    return 0;
}
