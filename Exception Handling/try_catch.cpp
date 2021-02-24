#include <iostream>
using namespace std;

int main()
{
    int a = 10, b = 0, c;
    try
    {
        if (b == 0)
        {
            throw 1;
        }
        c = a / b;
        cout << c << endl;
    }

    catch (int e)
    {
        cout << "Zero Division Error - Code - " << e << endl;
    }
    cout << "End of Code";
}