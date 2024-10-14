#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin >> t;
    vector<int> v;

    while (t--)
    {
        map<ll, ll> mp;
        ll n, cnt = 0;
        cin >> n;
        for (ll i = 1; i <= n; i++)
        {
            ll x;
            cin >> x;
            mp[x - i]++;
        }
        for (auto i : mp)
        {
            cnt += ((i.second - 1) * i.second) / 2;
        }
        cout << cnt << endl;
    }
}