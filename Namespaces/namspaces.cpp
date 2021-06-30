#include <iostream>
using namespace std;

namespace First
{
    void func()
    {
        cout << "First Namespace" << endl;
    }
} // namespace First

namespace Second
{
    void func()
    {
        cout << "Second Namespace" << endl;
    }
} // namespace Second

int main()
{
    First::func();
    Second::func();
}
