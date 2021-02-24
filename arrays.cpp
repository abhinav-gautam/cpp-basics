#include <iostream>
using namespace std;

int main()
{
    int A[5] = {1, 2};
    // For loop
    for (int i = 0; i < 5; i++)
    {
        cout << A[i] << endl;
    }

    // For each loop
    int B[5] = {1, 2, 3, 4, 5};
    for (auto x : B)
    {
        cout << x << endl;
    }

    // For each loop with reference. Reference does inplace increments
    int C[5] = {1, 2, 3, 4, 5};
    for (auto &x : C)
    {
        cout << ++x << endl;
    }
    for (auto x : C)
    {
        cout << x;
    }

    // Multidimensional Array
    int D[2][3] = {{1, 2, 3}, {4, 5, 6}};
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << D[i][j] << endl;
        }
    }
}