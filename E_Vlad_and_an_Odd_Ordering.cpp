#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    vector<int> v;
    map<int, int> mp;
    for (int i = 1; i <= 100000; i++)
    {
        for (int j = 1; j <= 100000; j += 2)
        {
            if (mp[i * j] == 1 || (i * j) > 100000)
            {
                continue;
            }
            // cout << i * j << " ";
            v.push_back(i * j);
            mp[i * j]++;
        }
    }
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        cout << v[k - 1] << endl;
    }
}