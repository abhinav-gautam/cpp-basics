#include <iostream>
using namespace std;

class Class2;
class Class1
{
private:
    int x;
    friend Class2;
};

class Class2
{
    Class1 c1;
    void function()
    {
        c1.x = 10;
    }
};