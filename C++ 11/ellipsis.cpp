#include <iostream>
#include <cstdarg>

using namespace std;

int sum(int n, ...)
{
    va_list list;
    va_start(list, n);
    int s;
    for (auto i = 0; i < n; i++)
    {
        s += va_arg(list, int);
    }
    return s;
}
int main()
{
    cout << sum(4, 1, 2, 3, 4) << endl;
}