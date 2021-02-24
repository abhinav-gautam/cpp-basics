#include <iostream>
using namespace std;

class Rectangle
{
public: // By default attributes/members are private
    int length, breadth;
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

    r1.length = 10;
    r1.breadth = 20;
    cout << r1.area() << endl;
    cout << r1.perimeter() << endl;

    r2.length = 40;
    r2.breadth = 12;
    cout << r2.area() << endl;
    cout << r2.perimeter() << endl;

    // Accessing the object using pointers
    Rectangle *p;
    p = &r1;
    p->length = 2;
    p->breadth = 5;
    cout << p->area() << endl;
    cout << p->perimeter() << endl;

    // Creating object in heap
    Rectangle *q = new Rectangle();
    q->length = 31;
    q->breadth = 23;
    cout << q->area() << endl;
    cout << q->perimeter() << endl;
}