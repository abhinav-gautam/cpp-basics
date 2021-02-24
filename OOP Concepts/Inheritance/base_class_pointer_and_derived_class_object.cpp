#include <iostream>
using namespace std;

class Base
{
public:
    void function1()
    {
        cout << "Base function1" << endl;
    }
    void function2()
    {
        cout << "Base function2" << endl;
    }
};
class Derived : public Base
{
public:
    void function3()
    {
        cout << "Derived function3" << endl;
    }
    void function4()
    {
        cout << "Derived function4" << endl;
    }
};
int main()
{
    Base *p = new Derived; // Pointer of base class can store Derived class
    p->function1();
    p->function2();
    // p->function3(); // Pointer of base class cant call functions of Derived class
    // p->function4();

    // Derived *q = new Base; // This is not possible
}