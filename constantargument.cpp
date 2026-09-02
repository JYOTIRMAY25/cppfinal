#include <iostream>
using namespace std;

int strlen(const char *p) {
    int length = 0;
    while (*p != '\0') {
        length++;
        p++;
    }
    return length;
}

int main() {
    const char *message = "Hello, World!";
    cout << "Length: " << strlen(message) << endl;
    return 0;
}
