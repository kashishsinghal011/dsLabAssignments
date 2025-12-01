#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 2, 5, 6, 6, 7};
    int n = 7, count = 0;

    for (int i = 0; i < n; i++) {
        bool isDistinct = true;

        for (int j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                isDistinct = false;
                break;
            }
        }

        if (isDistinct)
            count++;
    }

    cout << "Distinct elements = " << count;
    return 0;
}
