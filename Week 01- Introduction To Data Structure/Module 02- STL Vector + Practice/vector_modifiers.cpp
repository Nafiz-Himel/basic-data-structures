#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {1, 2, 3, 4, 5};
    vector<int> v2;                     // v.assign(v) ->assign another vector.
    v2 = v;
    // for(int i=0; i<v2.size(); i++)
    // {
    //     cout << v2[i] << " ";
    // }
    v2.push_back(10);
    v2.push_back(20);
    v2.pop_back();

    vector<int> v3 ={100,200,300};
    v2.insert(v2.begin()+1,1000);
    v2.insert(v2.begin()+3,v3.begin(),v3.end());

    v2.erase(v2.end()-1);
    v2.erase(v2.begin()+8,v2.end());
    for (int x : v2)
    {
        cout << x << " ";
    }

    cout << endl << endl;
    replace(v2.begin(),v2.end(),2,200);
    for (int x : v2)
    {
        cout << x << " ";
    }


    cout << endl << endl;
    // vector<int> :: iterator it = find(v2.begin(), v2.end(),0);
    auto it = find(v2.begin(), v2.end(),0);
    if(v2.end()==it)
    {
        cout << "Not found" << endl;
    }
    else
    {
        cout << "Found" << endl;
    }
    cout << endl << *it << endl << endl;

    for(auto it = v2.begin(); it<v2.end(); it++)
    {
        cout << *it << " ";
    }
    return 0;
}