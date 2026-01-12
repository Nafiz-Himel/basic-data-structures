#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        vector<int> a(3), b(3);
        for (int i = 0; i < 3; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < 3; i++)
        {
            cin >> b[i];
        }
        sort(a.rbegin(), a.rend());
        sort(b.rbegin(), b.rend());

        if (a > b)
        {
            cout << "Alice" << endl;
        }
        else if (a == b)
        {
            cout << "Tie" << endl;
        }
        else
        {
            cout << "Bob" << endl;
        }
    }
    return 0;
}
