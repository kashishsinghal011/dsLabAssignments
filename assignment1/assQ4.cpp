// a // logic for reversing the array
#include <iostream>
using namespace std;
int main()
{
    // creating array
    int arr[5] = {2, 3, 4, 1, 5};
    int st = 0;
    int end = 4;

    while (st <= end)
    {
        int temp = arr[st];
        arr[st] = arr[end];
        arr[end] = temp;
        st++;
        end--;
    }
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i];
    }
    return 0;
}

// matrix multiplication
#include <iostream>
using namespace std;
int main()
{
    // creating array
    int arr1[3][3] = {{3, 4, 5}, {7, 5, 1}, {9, 2, 0}};
    int arr2[3][3] = {{1, 3, 5}, {2, 4, 6}, {2, 5, 6}};
    int rs[3][3];
    // to check first wehther it is going to multiply m1*n1 and m2*n2 then n1=m2;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            rs[i][j] = 0;
            for (int k = 0; k < 3; k++)
            {
                rs[i][j] = rs[i][j] + arr1[i][k] * arr2[k][j];
            }
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << rs[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

// tranposing matrix
#include <iostream>
using namespace std;
int main()
{
    // creating array
    int rs[3][3] = {{3, 4, 5}, {7, 5, 1}, {9, 2, 0}};
    // to check first wehther it is going to multiply m1*n1 and m2*n2 then n1=m2;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << rs[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            rs[i][j] = rs[j][i];
        }
    }
    // after transposing printing
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << rs[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}