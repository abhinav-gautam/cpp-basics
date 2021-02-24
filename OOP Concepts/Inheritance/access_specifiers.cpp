#include <iostream>
using namespace std;

class Base
{
public:
    int x;

private:
    int y;

protected:
    int z;

public:
    void set()
    {
        x = 10; // Inside parent class all are accessible
        y = 20;
        z = 30;
    }
};
class Derived : public Base
{
    void set()
    {
        x = 10;
        // y = 20; // Inside child class private is not accessible
        z = 30;
    }
};
int main()
{
    Derived d;
    d.x = 10;
    // d.y = 20; // For object private and protected is not accessible
    // d.z = 30;
}