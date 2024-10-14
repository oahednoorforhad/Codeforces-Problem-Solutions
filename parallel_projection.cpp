#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int w, d, h, a, b, f, g, cnt = 0;
        cin >> w >> d >> h;
        cin >> a >> b >> f >> g;
        int ans = 0;
        
        ans = h + abs(d - b) + abs(a - f) + g;
        cout << ans << endl;
    }
}