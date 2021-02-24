#include <iostream>
using namespace std;

// Function Overloading
int add(int a, int b)
{
    return a + b;
}
float add(float a, float b)
{
    return a + b;
}
// Generic or Template Function
template <class T>
T maximum(T a, T b)
{
    return a > b ? a : b;
}
// Default Argument
int add_default(int a, int b, int c = 0)
{
    return a + b + c;
}
// Pass by value function
void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}
// Pass by address function
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
// Pass by reference function
void swap_ref(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
// Return by address function
int *func(int size)
{
    int *p = new int[size];
    for (int i = 0; i < size; i++)
    {
        p[i] = i + 1;
    }
    return p;
}
// Return by reference function
int &func2(int &a)
{
    cout << "From function func2 " << a << endl;
    return a;
}
// Global and local variable
int g; // Global variable
int func3()
{
    int x = 10; // Local Variable
    g += x;
    cout << "From the function func3 " << g << endl;
    return x;
}
// Static Variable
void func4()
{
    static int v = 0; // Static variable is persisted in memory but have function level scope
    int a = 4;
    v++;
    cout << a << " " << v << endl;
}
// Recursive Function
void recFunc(int n)
{
    if (n > 0)
    {
        cout << n << endl;
        recFunc(n - 1);
    }
}
int main()
{
    // // Function overloading
    // cout << add(4, 5) << endl;
    // cout << add(4.2f, 5.6f) << endl;

    // // Template Function
    // cout << maximum(5.4, 3.6) << endl;

    // // Deafult Argument
    // cout << add_default(3, 5) << endl;
    // cout << add_default(5, 6, 2) << endl;

    // int x = 10, y = 20;
    // // Pass by value
    // swap(x, y);
    // cout << x << " " << y << endl;

    // x = 10, y = 20;
    // // Pass by address
    // swap(&x, &y);
    // cout << x << " " << y << endl;

    // x = 10, y = 20;
    // // Pass by reference
    // swap_ref(x, y);
    // cout << x << " " << y << endl;

    // // Return by Address
    // int *p = func(5);
    // for (int i = 0; i < 5; i++)
    // {
    //     cout << p[i];
    // }

    // // Return by Reference
    // int a = 10;
    // func2(a) = 20;
    // cout << a << endl;

    // // Global and local variable
    // g = 10;
    // cout << g << endl;
    // func3();
    // cout << g << endl;

    // // Scoping rule
    // int g = 50;
    // {
    //     int g = 30;
    //     cout << "Inside block " << g << endl;
    // }
    // cout << g << endl;
    // cout << ::g << endl;

    // // Static Variable
    // func4();
    // func4();
    // func4();

    // Recursive Function
    int n = 5;
    recFunc(n);
}