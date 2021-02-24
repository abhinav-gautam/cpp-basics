#include <iostream>
using namespace std;

int main() {
    string name;
    cout << "Enter Name:";
//    cin >> name; // This will take only first word
    getline(cin,name);
    cout << "Hello " << name;
    return 0;
}
