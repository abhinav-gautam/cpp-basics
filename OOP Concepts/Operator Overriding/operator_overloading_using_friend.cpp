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
    friend Complex operator+(Complex c1, Complex c2);
    friend ostream &operator<<(ostream &output, Complex &c);
};
ostream &operator<<(ostream &output, Complex &c)
{
    return output << c.real << "+i" << c.img;
}
Complex operator+(Complex c1, Complex c2)
{
    return Complex(c1.real + c2.real, c1.img + c2.img);
}
int main()
{
    Complex c1(4, 3), c2(7, 1), c3;
    c3 = c1 + c2;
    cout << c3 << endl;
}