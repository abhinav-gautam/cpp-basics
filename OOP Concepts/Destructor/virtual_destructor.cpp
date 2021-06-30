#include <iostream>
using namespace std;

class Base
{
public:
    Base()
    {
        cout << "Base Constructor" << endl;
    }
    // Virtual destructor enables the derived class destructor to be called
    virtual ~Base()
    {
        cout << "Base Destructor" << endl;
    }
};
class Derived : public Base
{
public:
    Derived()
    {
        cout << "Derived Constructor" << endl;
    }
    ~Derived()
    {
        cout << "Derived Destructor" << endl;
    }
};

int main()
{
    Base *ptr = new Derived();

    delete ptr;
}