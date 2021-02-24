#include <iostream>
using namespace std;

class Outer
{
public:
    int a;
    static int x;
    void outerFunction()
    {
        cout << i.b << endl;
        i.innerFunction();
    }
    class Inner
    {
    public:
        int b;
        void innerFunction()
        {
            cout << x << endl;
        }
    };
    Inner i;
};
int Outer::x = 43;