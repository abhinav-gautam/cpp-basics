#include <iostream>
using namespace std;

int main()
{
    int c = 0;
    // While loop
    while (c <= 10)
    {
        cout << c << endl;
        c++;
    }

    // Do while loop
    c = 0;
    do
    {
        cout << c << endl;
        c++;
    } while (c <= 10);

    // For loop
    for (int i = 0; i <= 10; i++)
    {
        cout << i << endl;
    }

    // Infinite loop
    while (1)
    {
        cout << 1;
    }

    return 0;
}