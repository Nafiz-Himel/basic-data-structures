#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, y;
        cin >> n >> x >> y;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int mini = 0;
        ;
        for (int i = 0; i < n; i++)
        {
            mini += min((a[i] * x), y);
        }
        cout << mini << endl;
    }
    return 0;
}