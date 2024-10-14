#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, sum = 0, sum1 = 0, min = 0, cnt = 0;
        cin >> n;
        vector<ll> v;
        for (ll i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(abs(x));
            sum += abs(x);
            if (x < 0)
            {
                cnt++;
            }
        }
        if ((cnt % 2 == 0))
            cout << sum << endl;
        else
            cout << sum - (2 * abs(*min_element(v.begin(), v.end()))) << endl;
    }
}