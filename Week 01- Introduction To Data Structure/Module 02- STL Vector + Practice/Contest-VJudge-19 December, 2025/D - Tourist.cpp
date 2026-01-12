#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a, b;
        cin >> n >> a >> b;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int j, k;
            cin >> j >> k;
            int r = abs(a - j) + abs(b - k);
            v.push_back(r);
        }
        int mini = INT_MAX;
        for (auto a : v)
        {
            if (a < mini)
            {
                mini = a;
            }
        }
        cout << mini << endl;
    }
    return 0;
}