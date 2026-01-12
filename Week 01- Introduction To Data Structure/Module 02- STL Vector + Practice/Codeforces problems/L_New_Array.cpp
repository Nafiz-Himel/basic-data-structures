#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    vector<int> v1(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v1[i];
    }

    vector<int> v2(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v2[i];
    }

    for (auto s : v2)
    {
        cout << s << " ";
    }

    for (auto s : v1)
    {
        s == v1.back() ? cout << s : cout << s << " ";
    }
    return 0;
}