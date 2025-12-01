#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[] = "Hello";
    int n = strlen(str);

    for (int i = 0, j = n - 1; i < j; i++, j--)
        swap(str[i], str[j]);

    cout << "Reversed string: " << str;
    return 0;
}
