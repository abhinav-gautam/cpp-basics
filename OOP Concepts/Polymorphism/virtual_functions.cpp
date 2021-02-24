#include <iostream>
using namespace std;

class Parent
{
public:
    void func1()
    {
        cout << "Func1 parent" << endl;
    }
    // When called from base class pointer with derived class object, derived class function will be called
    virtual void func2()
    {
        cout << "Func2 parent" << endl;
    }
};
class Child : public Parent
{
public:
    void func1()
    {
        cout << "Func1 child" << endl;
    }
    void func2()
    {
        cout << "Func2 child" << endl;
    }
};
int main()
{
    // Base class pointer with derived class object
    Parent *parent = new Child;
    parent->func1();
    parent->func2(); // Derived class function will be called because of virtual keyword
}