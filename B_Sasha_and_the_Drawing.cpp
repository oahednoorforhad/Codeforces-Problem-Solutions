#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        double n, k;
        cin >> n >> k;
        int ans = 0;
        if (k == (4 * n - 2))
        {
            ans = (4 * n) / 2;
            cout << ans << endl;
        }
        else
        {
            ans = ceil(k / 2);
            cout << ans << endl;
        }
    }
}