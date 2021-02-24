#include <iostream>
using namespace std;

class Rectangle
{
    int length, breadth;

public:
    // Constructors
    Rectangle(int l = 0, int b = 0);
    Rectangle(Rectangle &rect);

    // Mutators
    void setLength(int l);
    void setBreadth(int b);

    // Accessors
    int getLength();
    int getBreadth();

    // Facilitators
    int area();
    int perimeter();

    // Enquiry
    bool isSquare();

    // Destructor
    ~Rectangle();
};

// Parameterized Constructor
Rectangle::Rectangle(int length, int breadth)
{
    setLength(length);
    setBreadth(breadth);
}
// Copy Constructor
Rectangle::Rectangle(Rectangle &rect)
{
    length = rect.length;
    breadth = rect.breadth;
}
// Mutators
void Rectangle::setLength(int length)
{
    if (length < 0)
    {
        this->length = 0;
        return;
    }
    this->length = length;
}
void Rectangle::setBreadth(int breadth)
{
    if (breadth < 0)
    {
        this->breadth = 0;
        return;
    }
    this->breadth = breadth;
}
// Accessors
int Rectangle::getLength()
{
    return length;
}
int Rectangle::getBreadth()
{
    return breadth;
}
// Facilitators
int Rectangle::area()
{
    return length * breadth;
}
int Rectangle::perimeter()
{
    return 2 * (length + breadth);
}
// Enquiry
bool Rectangle::isSquare()
{
    return length == breadth;
}
// Destructor
Rectangle::~Rectangle()
{
    cout << "Rectangle Destroyed" << endl;
}
int main()
{
    Rectangle r1(12, 23), r2(r1);

    cout << r1.getLength() << endl;
    cout << r1.getBreadth() << endl;
    cout << r1.area() << endl;
    cout << r1.perimeter() << endl;
    cout << r1.isSquare() << endl;

    cout << r2.getLength() << endl;
    cout << r2.getBreadth() << endl;
    cout << r2.area() << endl;
    cout << r2.perimeter() << endl;
    cout << r2.isSquare() << endl;
}