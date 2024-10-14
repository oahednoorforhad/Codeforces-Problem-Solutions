#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, a, b;
        cin >> n >> a >> b;
        ll temp = n - (a + b);
        if (temp > 1 || (a == n && b == n))
        {
            cout << "Yes" << endl;
        }
        else
            cout << "No" << endl;
    }
}
