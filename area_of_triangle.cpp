#include <iostream>
using namespace std;
int main()
{
    float base, height, area;
    cout << "Enter base and height:";
    cin >> base >> height;
    area = (base * height) / 2;
    cout << "Area is:" << area << endl;
    return 0;
}
