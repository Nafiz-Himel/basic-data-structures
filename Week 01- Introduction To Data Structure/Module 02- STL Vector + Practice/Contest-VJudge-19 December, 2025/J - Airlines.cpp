#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, n;
        cin >> x >> n;

        int total = (n + 99) / 100;

        int ne = max(0, total - x);
        cout << ne << endl;
    }
    return 0;
}
