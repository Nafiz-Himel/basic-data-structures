#include<bits/stdc++.h>
using namespace std;
void fun(int* &p)     // p-> copy; &p->same;
{
    // int y = 100;
    // p = &y;
    // cout << "In fun:" << *p << endl;
    // cout << "In fun:" << &p << endl;

    p = NULL;
}

int main()
{
    int x = 10;
    int* p = &x;
    fun(p);
    // cout << "In main:" << *p << endl;
    // cout << "In main:" << &p << endl;
    // cout << *p << endl;
    cout << "In main:" << p << endl;
    return 0;
}