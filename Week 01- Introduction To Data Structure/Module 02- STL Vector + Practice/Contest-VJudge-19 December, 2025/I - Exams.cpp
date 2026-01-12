#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        float n, x, y;
        cin >> n >> x >> y;
        float p = (y / (n * x)) * 100;
        p > 50 ? cout << "YES" : cout << "NO";
    }
    return 0;
}
