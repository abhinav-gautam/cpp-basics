#include <iostream>
using namespace std;

int main()
{
    int x = 12;
    int y = 20;

    const int *ptr1 = &x; // Location is locked, data can't be modified
    cout << *ptr1 << endl;

    // ++(*ptr1) // Data cant be modified

    // We can make the pointer to point to other data
    ptr1 = &y;
    cout << *ptr1 << endl;

    int *const ptr2 = &x; // Pointer is locked, pointer can't be modified
    cout << *ptr2 << endl;

    ++(*ptr2); // We can modified the data
    cout << *ptr2 << endl;

    // *ptr2++; // We cannot modify the pointer
    // ptr2 = &y; // We cannot modify the pointer

    const int *const ptr3 = &x; // Both pointer and data is locked
    cout << *ptr3 << endl;

    // ++(*ptr3) // Data cant be modified
    // ptr2 = &y; // We cannot modify the pointer
}