#include <bits/stdc++.h>
using namespace std;
#define all(x) (x).begin(), (x).end()
#define fo(n) for (ll i = 0; i < n; i++)
#define fo1(n) for (ll i = 1; i <= n; i++)
#define ll long long
#define pb push_back
#define ff first
#define ss second
#define cy cout << "YES\n";
#define cn cout << "NO\n";
#define fIO                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);
#define faster                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cin.tie(0);
const ll N = 2e5 + 10;
const ll mod = 1e9 + 7;
ll inv(ll i)
{
    if (i == 1)
        return 1;
    return (mod - ((mod / i) * inv(mod % i)) % mod) % mod;
}
bool isPrime(int n)
{
    if (n <= 1)
        return false;
    for (int i = 2; i <= n / 2; i++)
        if (n % i == 0)
            return false;
    return true;
}
void solve()
{
    int n, m = 0, j = 0, k = 0, l = 0;
    cin >> n;
    vector<int> v;
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    sort(all(v));
    m = v[0];
    j = v[n - 1];
    k = v[1];
    l = v[n - 2];
    int res = abs(m - j) + abs(j - k) + abs(k - l) + abs(l - m);
    // cout << m << " " << j << " " << k << " " << l << " ";
    cout << res << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}

// priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>>h,p;
// formula sum of i^2   (n*(n+1)*((2*n)+1))/6;
