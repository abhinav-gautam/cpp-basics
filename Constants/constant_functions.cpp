#include <iostream>
using namespace std;

class Demo
{
public:
    int x = 12, y = 45;
    void display() const
    {
        // x++; // It can't be modified
        cout << x << " " << y << endl;
    }
};
int main()
{
    Demo d;
    d.display();
}