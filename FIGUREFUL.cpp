#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin >> t;
    map<pair<int, int>, string> mp;
    for (int i = 0; i < t; i++)
    {
        int x, y;
        string str;
        cin >> x >> y >> str;
        mp[{x,y}]=str;
    }
    int n;
    cin >> n;
    for (int k = 0; k < n; k++)
    {
        int a, b;
        cin >> a >> b;
        cout << mp[{a, b}] << endl;
    }
}