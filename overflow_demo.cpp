#include <iostream>
using namespace std;

int main() {
    char a = 128;
    cout << (int) a << endl;

    char b = 127;
    b++;
    cout << (int) b << endl;

    char c = -129;
    cout << (int) c << endl;

    int d = INT_MAX;
    cout << d << endl;
    d++;
    cout << d << endl;

    return 0;
}
