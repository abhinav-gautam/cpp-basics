#include <iostream>
#include <memory>
using namespace std;

class Rectangle
{
public:
    int length, breadth;
    Rectangle(int l, int b)
    {
        this->length = l;
        this->breadth = b;
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
    // // Unique pointer - only a single pointer can point to the object
    // unique_ptr<Rectangle> ptr(new Rectangle(10, 5));
    // cout << ptr->area() << endl;

    // unique_ptr<Rectangle> ptr2;
    // ptr2 = move(ptr);
    // cout << ptr2->area() << endl;
    // // cout << ptr->area() << endl; //this wont give any result

    // Shared pointer - it maintains use count
    shared_ptr<Rectangle> ptr(new Rectangle(10, 5));
    cout << ptr->area() << endl;

    shared_ptr<Rectangle> ptr2;
    ptr2 = ptr;
    cout << "ptr2:" << ptr2->area() << endl;
    cout << "ptr:" << ptr->area() << endl; //this wont give any result
    cout << "Use count:" << ptr.use_count() << endl;
}