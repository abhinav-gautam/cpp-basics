#include <iostream>
using namespace std;

int max(int x, int y)
{
    return x > y ? x : y;
}
int min(int x, int y)
{
    return x < y ? x : y;
}
int main()
{
    int x = 10;

    // Declration of pointer
    int *p;

    // Initialization of pointer
    p = &x;

    cout << x << endl;  // Data
    cout << &x << endl; // Address
    cout << p << endl;  // Address of data x
    cout << &p << endl; // Address of pointer p

    // Dereferencing a pointer
    cout << *p << endl; // Data x

    // Pointers can be used to create objects in heap
    int *o = new int[5];
    o[0] = 50;
    o[1] = 25;

    cout << o[1] << endl;

    // Freeing the memory space
    delete[] o;
    o = nullptr;

    // Pointer Arithmetic
    int A[5]{2, 4, 6, 8, 10};
    int *a = A, *b = &A[4];

    cout << a << endl; // Address
    cout << *a << endl;

    cout << b << endl;  // Address
    cout << *b << endl; // Data

    // p++
    a++;
    cout << a << endl;  // Address
    cout << *a << endl; // Data

    // p--
    a--;
    cout << a << endl;  // Address
    cout << *a << endl; // Data

    // p+c
    a = a + 2;
    cout << a << endl;  // Address
    cout << *a << endl; // Data

    // p-c
    a = a - 2;
    cout << a << endl;  // Address
    cout << *a << endl; // Data

    // p-q gives distance between pointers
    cout << b - a << endl; // Address

    // Function pointers
    int (*fp)(int x, int y);      // Pointer declaration
    fp = max;                     // Pointer initialization
    cout << (*fp)(10, 5) << endl; //Function call
    fp = min;                     //Function override
    cout << (*fp)(10, 5) << endl;
}