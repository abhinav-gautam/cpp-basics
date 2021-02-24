#include <iostream>
using namespace std;

class Parent
{
protected:
    int x;

private:
    int y;

public:
    int z;
    void function()
    {
        x = 10;
        y = 20;
        z = 30;
    }
};

// Inheriting publicly
// In public inheritance all members have their respective access in child and grand child class
class Child1 : public Parent
{
    void function()
    {
        x = 10;
        // y = 20; // Private Member cant be accessed in any child with any type of inheritance
        z = 30;
    }
};
class GrandChild1 : public Child1
{
    void function()
    {
        x = 10;
        // y = 20; // Private Member cant be accessed in any child with any type of inheritance
        z = 30;
    }
};

// Inheriting protectively
// In protected inheritance all members of parents are considered as protected in child and grand child class (private will remain private)
class Child2 : protected Parent
{
    void function()
    {
        x = 10; // These members will be considered as protected
        // y = 20; // Private Member cant be accessed in any child with any type of inheritance
        z = 30;
    }
};
class GrandChild2 : protected Child2
{
    void function()
    {
        x = 10; // These members will be considered as protected
        // y = 20; // Private Member cant be accessed in any child with any type of inheritance
        z = 30;
    }
};

// Inheriting privately
// In private inheritance all members of parent class are considered as private in child and grand child class
class Child3 : private Parent
{
    void function()
    {
        x = 10; // These members will be considered as protected
        // y = 20; // Private Member cant be accessed in any child with any type of inheritance
        z = 30;
    }
};
class GrandChild3 : private Child3
{
    void function()
    {
        // x = 10; // These members will be considered as private and hence cant be accessed
        // y = 20;
        // z = 30;
    }
};

int main()
{

    Parent parent;
    // parent.x = 10; // Private member cant be accessed by object
    // parent.y = 10; // Protected member cant be accessed by object
    parent.z = 10;

    // Object of public inheritance
    Child1 child1;
    // child1.x = 10; // Private member cant be accessed by object
    // child1.y = 10; // Protected member cant be accessed by object
    child1.z = 10;
    GrandChild1 grandchild1;
    // grandchild1.x = 10; // Private member cant be accessed by object
    // grandchild1.y = 10; // Protected member cant be accessed by object
    grandchild1.z = 10;

    // Object of protected inheritance
    Child2 child2;
    // child2.x = 10; // Private member cant be accessed by object
    // child2.y = 10; // Protected member cant be accessed by object
    // child2.z = 10; // Protected member cant be accessed by object
    GrandChild2 grandchild2;
    // grandchild2.x = 10; // Private member cant be accessed by object
    // grandchild2.y = 10; // Protected member cant be accessed by object
    // grandchild2.z = 10; // Protected member cant be accessed by object

    // Object of private inheritance
    Child3 child3;
    // child3.x = 10; // Private member cant be accessed by object
    // child3.y = 10; // Private member cant be accessed by object
    // child3.z = 10; // Private member cant be accessed by object
    GrandChild3 grandchild3;
    // grandchild3.x = 10; // Private member cant be accessed by object
    // grandchild3.y = 10; // Private member cant be accessed by object
    // grandchild3.z = 10; // Private member cant be accessed by object
}