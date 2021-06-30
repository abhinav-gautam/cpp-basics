#include <iostream>
#include <fstream>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    string branch;

    // Operator Overriding
    friend ofstream &operator<<(ofstream &ofs, Student &s);
    friend ifstream &operator>>(ifstream &ifs, Student &s);
    friend ostream &operator<<(ostream &cout, Student &s);

    // Helper function to store object to file
    static void store(Student &s, string filename)
    {
        ofstream ofs(filename);
        ofs << s;
    }

    // Helper function to read object from file
    static Student read(string filename)
    {
        Student s;
        ifstream ifs(filename);
        ifs >> s;
        return s;
    }
};
// Operator Overriding
ofstream &operator<<(ofstream &ofs, Student &s)
{
    ofs << s.name << endl;
    ofs << s.roll << endl;
    ofs << s.branch << endl;
    return ofs;
}
ifstream &operator>>(ifstream &ifs, Student &s)
{
    ifs >> s.name >> s.roll >> s.branch;
    return ifs;
}
ostream &operator<<(ostream &cout, Student &s)
{
    cout << s.name << endl;
    cout << s.roll << endl;
    cout << s.branch << endl;
    return cout;
}
int main()
{
    Student s1;
    s1.name = "Ram";
    s1.roll = 1;
    s1.branch = "IT";

    // Storing object
    Student::store(s1, "Object.txt");

    // Reading object
    Student s2;
    s2 = Student::read("Object.txt");
    cout << s2;
}