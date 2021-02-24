#include <iostream>
using namespace std;

// Struct is very similar to class except in struct attributes and functions are public by default
struct Test
{
    int x, y;
    void display()
    {
        cout << x << " " << y << endl;
    }
};

int main()
{
    Test t;
    t.x = 10;
    t.y = 6;
    t.display();
}