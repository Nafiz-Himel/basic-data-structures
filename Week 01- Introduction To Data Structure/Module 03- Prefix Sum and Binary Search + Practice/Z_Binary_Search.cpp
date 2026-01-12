#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, t;
    cin >> n >> t;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    while (t--)
    {
        int val;
        cin >> val;

        int flag = 0;

        int l = 0;
        int r = n - 1;

        while (l <= r)
        {
            int mid = (l + r) / 2;

            if (a[mid] == val)
            {
                flag = 1;
                break;
            }
            else if (a[mid] > val)
            {
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }
        flag == 0 ? cout << "not found\n" : cout << "found\n";
    }
    return 0;
}