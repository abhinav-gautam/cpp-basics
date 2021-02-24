#include <iostream>
using namespace std;

class Test
{
    int a;
    int *p;

public:
    Test(int value)
    {
        a = value;
        p = new int[5]{1, 2, 3, 4, 5};
    }

    // // Shallow Copy Constructor
    // Test(Test &t)
    // {
    //     a = t.a;
    //     p = t.p;
    // }

    // Deep Copy Constructor
    Test(Test &t)
    {
        a = t.a;
        p = new int[sizeof(t.p)];
        for (int i = 0; i <= sizeof(*p); i++)
        {
            p[i] = t.p[i];
        }
    }
    void showDetails()
    {
        cout << "a " << a << endl;
        cout << "Address of p " << p << endl;
        cout << "Data:" << endl;
        for (int i = 0; i <= sizeof(*p); i++)
        {
            cout << p[i] << endl;
        }
    }
};
int main()
{
    Test t1(5);
    cout << "t1 details" << endl;
    t1.showDetails();
    Test t2(t1);
    cout << "t2 details" << endl;
    t2.showDetails();
}