#include <iostream>
using namespace std;

class Complex
{
    int real, img;

public:
    Complex(int real = 0, int img = 0)
    {
        this->real = real;
        this->img = img;
    }
    Complex operator+(Complex c)
    {
        return Complex(this->real + c.real, this->img + c.img);
    }
    void display()
    {
        cout << this->real << "+i" << this->img << endl;
    }
};

int main()
{
    Complex c1(4, 3), c2(7, 1), c3;
    c3 = c1 + c2;
    c3.display();
}