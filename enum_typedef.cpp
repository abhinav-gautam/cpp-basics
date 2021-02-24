#include <iostream>
using namespace std;

//Enum is set of constants under one name
enum day {mon, tue, wed, thu, fri, sat, sun};

/*
    Other ways to declare constant
    #define mon 0;
    const int mon = 0;
 */

// Typedef is alias for datatype
typedef int marks;

int main() {
    day d = tue;
    cout << d << endl;

    marks m1,m2=5;
    cout << m2 << endl;

    return 0;
}
