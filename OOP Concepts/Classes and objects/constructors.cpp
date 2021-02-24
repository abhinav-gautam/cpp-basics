#include <iostream>
using namespace std;

class Rectangle
{
    int length, breadth;

public:
    // Parameterized Constructor
    Rectangle(int l = 0, int b = 0)
    {
        setLength(l);
        setBreadth(b);
    }
    // Copy Constructor
    Rectangle(Rectangle &rect)
    {
        length = rect.length;
        breadth = rect.breadth;
    }
    void setLength(int l)
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
    Rectangle r1(12, 23), r2(r1);

    cout << r1.getLength() << endl;
    cout << r1.getBreadth() << endl;
    cout << r1.area() << endl;
    cout << r1.perimeter() << endl;

    cout << r2.getLength() << endl;
    cout << r2.getBreadth() << endl;
    cout << r2.area() << endl;
    cout << r2.perimeter() << endl;
}