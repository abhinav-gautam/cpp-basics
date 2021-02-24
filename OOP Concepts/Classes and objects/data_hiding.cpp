#include <iostream>
using namespace std;

class Rectangle
{
private:
    int length, breadth;

public:
    // Property Functions
    // Mutators
    void setLength(int l) // These are inline functions
    {
        if (l < 0)
        {
            length = 0;
            return;
        }
        length = l;
    }
    void setBreadth(int b)
    {
        if (b < 0)
        {
            breadth = 0;
            return;
        }
        breadth = b;
    }
    // Accessors
    int getLength()
    {
        return length;
    }
    int getBreadth()
    {
        return breadth;
    }
    int area()
    {
        return length * breadth;
    }
    int perimeter()
    {
        return 2 * (length + breadth);
    }
};

int main()
{
    Rectangle r1, r2; // These objects will be created in stack

    // r1.length = 10;
    // r1.breadth = 20;
    r1.setLength(10);
    r1.setBreadth(12);
    cout << r1.getLength() << endl;
    cout << r1.getBreadth() << endl;
    cout << r1.area() << endl;
    cout << r1.perimeter() << endl;

    // r2.length = 40;
    // r2.breadth = 12;
    r2.setLength(2);
    r2.setBreadth(-9);
    cout << r2.getLength() << endl;
    cout << r2.getBreadth() << endl;
    cout << r2.area() << endl;
    cout << r2.perimeter() << endl;
}