#include <iostream>
using namespace std;

class Parent
{
public:
    void display()
    {
        cout << "Display parent" << endl;
    }
};
class Child : public Parent
{
public:
    void display()
    {
        cout << "Display child" << endl;
    }
};
int main()
{
    Parent parent;
    parent.display();
    Child child;
    child.display();
}