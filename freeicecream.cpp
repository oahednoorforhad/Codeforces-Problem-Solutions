#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n, x, cnt = 0;
    cin >> n >> x;
    for (ll i = 0; i < n; i++)
    {
        char a;
        ll m;
        cin >> a >> m;
        if (a == '+')
        {
            x += m;
        }
        else if (a == '-')
        {
            if (x >= m)
            {
                x -= m;
            }
            else
                cnt++;
        }
    }
    cout << x << " " << cnt;
}