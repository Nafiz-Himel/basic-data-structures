#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    cout << v.capacity() << endl; // 0    // Returns the current available capacity of the vector.
    v.push_back(10);
    cout << v.capacity() << endl; // 1
    v.push_back(20);
    cout << v.capacity() << endl; // 2
    v.push_back(30);
    cout << v.capacity() << endl; // 4
    v.push_back(40);
    cout << v.capacity() << endl; // 4
    v.push_back(50);
    cout << v.capacity() << endl
         << endl; // 8

    v.resize(4); // Change the size of the vector.
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    v.resize(7, 100);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    cout << endl
         << endl
         << v.size() << endl;
    v.clear();                // Clears the vector elements. Do not delete the memory, only clear the value.
    cout << v.size() << endl; // Returns the size of the vector.

    cout << endl
         << v[0] << endl << endl;

    if (v.empty() == 1)       // Return true/false if the vector is empty or not.
    {
        cout << "Vector is empty now" << endl;
    }
    else
    {
        cout << "Vector is not empty now" << endl;
    }
    return 0;
}