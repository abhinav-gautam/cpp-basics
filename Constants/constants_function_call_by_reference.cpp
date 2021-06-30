#include <iostream>

using namespace std;

void display(const int &x, int &y)
{
    // x++; // This cant be modified
    cout << x << " " << y << endl;
}
int main()
{
    int a = 4, b = 6;
    display(a, b);
}