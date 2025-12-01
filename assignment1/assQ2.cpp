#include <iostream>
using namespace std;
int main()
{
    // creating array
    int arr[7] = {2, 3, 4, 1, 5, 2, 1};

    // this is will also go to n-1
    //  for(int i=0;i<7;i++){
    //      cout<<arr[i];
    //  }
    for (int i = 0; i < 7; i++)
    {
        for (int j = i + 1; j < 7; j++)
        {
            if (arr[i] == arr[j])
            {
                arr[j] = -1;
            }
        }
    }
    // removing duplicacy
    for (int i = 0; i < 7; i++)
    {
        if (arr[i] != -1)
        {
            cout << arr[i];
        }
    }
    return 0;
}