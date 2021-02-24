#include <iostream>
using namespace std;

int main() {
    // AND
    int a = 30, b = 9, c;
    c = a & b;
    cout << c << endl;

    // OR
    int d = 23, e = 10, f;
    f = d|e;
    cout << f << endl;

    // XOR
    int g = 21, h = 45, i;
    i = g^h;
    cout << i << endl;

    // NOT
    int j = 10, k;
    k = ~j;
    cout << k << endl;

    // Left Shift
    int m = 2, n;
    n = m<<1;
    cout << n << endl;

    // Right Shift
    int o = 2, p;
    p = o>>1;
    cout << p << endl;

    return 0;
}
