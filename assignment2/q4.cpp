#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char s1[50] = "Hello ";
    char s2[] = "World";

    strcat(s1, s2);

    cout << "Concatenated string: " << s1;
    return 0;
}
