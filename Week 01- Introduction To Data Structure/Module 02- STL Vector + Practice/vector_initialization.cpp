#include <bits/stdc++.h>
using namespace std;
int main()
{
    // vector<int>v; // type 1              -> Construct a vector with 0 elements.
    // vector<int>v(5); // type 2           -> Construct a vector with N elements.
    vector<int> v(5, 9); // type 3          -> Construct a vector with N elements and the value will be V.
    vector<int> v1(v);   // type 4          -> Construct a vector by copying another vector v2.
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << " ";
    }
    cout << endl
         << v.size() << endl;

    int a[5] = {0, 1, 2, 3, 4};
    vector<int> v2(a, a + 5); // type 5     -> Construct a vector by copying all elements from an array A of size N.
    for (int i = 0; i < v2.size(); i++)
    {
        cout << v2[i] << " ";
    }
    cout << endl;
    vector<int> v3={5, 1, 2, 3, 4}; // type 6
    for(int i = 0; i < v3.size(); i++)
    {
        cout << v3[i] << " ";
    }
    return 0;
}