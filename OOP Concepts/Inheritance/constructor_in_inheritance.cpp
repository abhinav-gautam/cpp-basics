#include <iostream>
using namespace std;

class Base
{
public:
    int a;
    Base()
    {
        cout << "Non-param Base" << endl;
    }
    Base(int a)
    {
        cout << "Param Base " << a << endl;
    }
};

class Derived : public Base
{
public:
    int x;
    Derived()
    {
        cout << "Non-param Derived" << endl;
    }
    Derived(int x)
    {
        cout << "Param Derived " << x << endl;
    }
    Derived(int a, int x) : Base(a)
    {
        cout << "Param Derived " << x << " " << a << endl;
    }
};
int main()
{
    Derived d(2);
}