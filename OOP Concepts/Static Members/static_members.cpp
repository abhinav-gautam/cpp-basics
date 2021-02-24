#include <iostream>
using namespace std;

class SomeClass
{
private:
    int a;

public:
    // Static members are associated to class but not objects
    static int count;
    SomeClass()
    {
        count++;
    }
    static int getCount()
    {
        return count;
    }
};

int SomeClass::count = 0;

int main()
{
    SomeClass c1;
    cout << c1.count << endl;
    cout << SomeClass::count << endl;

    SomeClass c2;
    cout << SomeClass::getCount() << endl;
}