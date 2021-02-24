#include <iostream>
using namespace std;

class SomeClass
{
private:
    int x;

protected:
    int y;

public:
    int z;

    friend void function();
};
void function()
{
    SomeClass c;
    c.x = 10;
    c.y = 10;
    c.z = 10;
}