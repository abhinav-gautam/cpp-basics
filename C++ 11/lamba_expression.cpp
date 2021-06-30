#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int b = 63;

    auto f = []() { cout << "Hello" << endl; };
    f();
    [](int x, int y) { cout << "Sum:" << x + y << endl; }(10, 23);

    // Accesing local variables
    [a]() { cout << a << endl; }();
    [&]() { cout << a << " " << b << endl; }();
}