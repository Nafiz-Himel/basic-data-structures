#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        vector<string> b(6);
        for (int i = 0; i < 6; i++)
        {
            cin >> b[i];
        }

        int count = 0;
        bool hat = false;
        for (int i = 0; i < 6; ++i)
        {
            if (b[i] == "W")
            {
                count++;
                if (count == 3)
                {
                    hat = true;
                    break;
                }
            }
            else
            {
                count = 0;
            }
        }
        cout << (hat ? "YES" : "NO") << endl;
    }
    return 0;
}