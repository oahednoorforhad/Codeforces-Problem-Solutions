#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    map<string, int> mp;
    ll q;
    cin >> q;
    while (q--)
    {
        ll que;
        cin >> que;
        if (que == 0)
        {
            string str;
            ll n;
            cin >> str >> n;
            if (mp.find(str)!=mp.end())
            {
                mp[str]=n;
            }
            mp.insert(make_pair(str, n));
        }
        else if (que == 1)
        {
            string str;
            cin >> str;
            cout<<mp[str]<<endl;
        }
    }
}
