#include <iostream>
using namespace std;

class Test
{
public:
    Test()
    {
        cout << "Test Created" << endl;
    }
    ~Test()
    {
        cout << "Test Destroyed" << endl;
    }
};

int main()
{
    Test t1;

    Test *ptr = new Test();
    delete ptr;
}