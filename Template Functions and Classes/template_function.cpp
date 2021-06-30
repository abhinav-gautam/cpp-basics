#include <iostream>
using namespace std;

template <class T>
T maximum(T x, T y)
{
    return x > y ? x : y;
}
template <class T, class R>
void add(T x, R y)
{
    cout << x + y << endl;
}
int main()
{
    cout << maximum(5, 6) << endl;
    cout << maximum(5.23, 14.5) << endl;

    add(5.15, 10);
}