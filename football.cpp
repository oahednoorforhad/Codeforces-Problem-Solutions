#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t, cnt[3];
    cin >> t;
    map<string, int> mp;
    vector<string> v;
    while (t--)
    {
        string str;
        cin >> str;
        if (mp.find(str) == mp.end())
        {
            v.push_back(str);
        }
        mp[str]++;
    }
    int mx = -1;
    string res;
    for (auto i : mp)
    {
        if (i.second > mx)
        {
            mx = i.second;
            res = i.first;
        }
    }
    cout << res;
}