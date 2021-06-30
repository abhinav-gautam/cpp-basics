#include <iostream>
using namespace std;

int main()
{
    // auto when data type is not known
    auto x = 10 + 5.13 * 'a';
    cout << x << endl;

    // decltype to copy some other variable datatype
    int x = 10;
    decltype(x) y = 32;
}