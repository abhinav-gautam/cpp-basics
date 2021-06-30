#include <vector>
#include <iostream>
using namespace std;

int main()
{
    vector<int> v = {5, 1, 3, 9, 2};
    v.push_back(10);

    // Using iterator
    vector<int>::iterator itr;
    cout << "Using iterator" << endl;
    for (itr = v.begin(); itr != v.end(); itr++)
    {
        cout << *itr << endl;
    }

    // Using for loop
    cout << "Using for loop" << endl;
    for (int x : v)
    {
        cout << x << endl;
    }
}

// C++ STL:
// vector = dynamic array
// list = doubly linked list
// forward_list = singly linked list
// deque = dynamic array with both side insertions
// priority_queue = max heap
// stack = lifo
// set = no duplicates
// map = hash table
// multimap = hash table with duplicate key
