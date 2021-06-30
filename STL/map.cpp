#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<int, string> m;
    m.insert(pair<int, string>(1, "Jon"));
    m.insert(pair<int, string>(2, "Joni"));
    m.insert(pair<int, string>(3, "Tom"));

    map<int, string>::iterator itr;
    for (itr = m.begin(); itr != m.end(); itr++)
    {
        cout << itr->first << " " << itr->second << endl;
    }

    // Getting a single value using key
    cout << "Getting single value" << endl;
    map<int, string>::iterator itr1;
    itr1 = m.find(2);
    cout << itr1->first << " " << itr1->second << endl;
}