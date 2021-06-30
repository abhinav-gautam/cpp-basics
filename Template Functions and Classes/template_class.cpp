#include <iostream>
using namespace std;

template <class T>
class Stack
{
private:
    T stack[10];
    int top;

public:
    void push(T data);
    T pop();
};
template <class T>
void Stack<T>::push(T data)
{
    cout << "Pushing Data" << endl;
}
template <class T>
T Stack<T>::pop()
{
    cout << "Popping data" << endl;
}
int main()
{
    Stack<int> s1;
    Stack<float> s2;
    s1.push(54);
    s1.pop();
}
