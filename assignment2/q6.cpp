#include <iostream>
using namespace std;

void transpose(int a[][3], int t[][3], int n) {
    t[0][0] = a[0][1];
    t[0][1] = a[0][0];
    t[0][2] = a[0][2];

    int k = 1;
    for (int i = 1; i <= a[0][2]; i++) {
        t[k][0] = a[i][1];
        t[k][1] = a[i][0];
        t[k][2] = a[i][2];
        k++;
    }
}

int main() {
    int A[4][3] = {
        {3, 3, 3},
        {0, 2, 5},
        {1, 0, 3},
        {2, 1, 8}
    };

    int T[4][3];
    transpose(A, T, 3);

    cout << "Transpose:\n";
    for (int i = 0; i < 4; i++)
        cout << T[i][0] << " " << T[i][1] << " " << T[i][2] << endl;

    return 0;
}
