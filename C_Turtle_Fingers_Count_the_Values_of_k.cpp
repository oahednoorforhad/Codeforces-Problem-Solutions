#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, l, sum = 0, af = 0, bf = 0, cnt = 0;
        cin >> a >> b >> l;
        vector<int> v;
        map<int, int> mp;
        if (l % a == 0)
        {
            af = 1;
        }
        if (l % b == 0)
        {
            bf = 1;
        }
        if (af == 0 && bf == 0)
        {
            cout << 1 << endl;
            continue;
        }
        for (int i = 0; i <= l; i++)
        {
            if (i % a == 0 || i % b == 0 || b % i == 0 || a % i == 0)
            {
                v.push_back(i);
            }
        }
        for (int i = 0; i <= v.size(); i++)
        {
            for (int j = 0; j <= log(l); j++)
            {
                for (int k = 0; k <= log(l); k++)
                {
                    if (v[i] * pow(a, j) * pow(b, k) == l)
                    {
                        if (mp[v[i]] == 0)
                        {
                            mp[v[i]]++;
                            cnt++;
                        }
                    }
                }
            }
        }
        cout << cnt << endl;
    }
}