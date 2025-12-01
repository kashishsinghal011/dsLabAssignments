#include <iostream>
using namespace std;

int main() {
    char str[] = "beautiful";
    char result[50];
    int k = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        char c = tolower(str[i]);
        if (c!='a' && c!='e' && c!='i' && c!='o' && c!='u')
            result[k++] = str[i];
    }
    result[k] = '\0';

    cout << "After deleting vowels: " << result;
    return 0;
}
