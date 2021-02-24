#include <iostream>
using namespace std;
int division(int x, int y) throw(int)
{
    if (y == 0)
    {
        throw 1;
    }
    return x / y;
}
int main()
{
    int a = 10, b = 05, c;
    try
    {
        c = division(a, b);
        cout << c << endl;
    }

    catch (int e)
    {
        cout << "Zero Division Error - Code - " << e << endl;
    }
    cout << "End of Code";
}

// ... To catch all exceptions