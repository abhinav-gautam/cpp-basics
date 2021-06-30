#include <fstream>
#include <iostream>
using namespace std;

int main()
{
    ifstream infile;
    infile.open("Sample.txt");
    string str;
    int x;
    if (infile)
    {
        infile >> str;
        infile >> x;
    }
    cout << str << endl;
    cout << x << endl;
    if (infile.eof())
    {
        infile.close();
    }
}