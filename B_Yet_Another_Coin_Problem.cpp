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
    int n, ans = 0;
    cin >> n;
    int cnt = 0;
    while (n != 0)
    {
        if (n >= 15)
        {
            if (n % 10 == 0)
            {
                goto jump1;
            }
            ans = n / 15;
            n = n - (15 * ans);
            cnt += ans;
            if (n == 8)
            {
                cnt--;
            }
            cout << ans << " 15 ";
        }
    jump1:
        if (n >= 10)
        {
            if (n % 6 == 0)
            {
                goto jump2;
            }
            ans = n / 10;
            n = n - (10 * ans);
            cnt += ans;
            cout << ans << " 10 ";
        }
    jump2:
        if (n >= 6)
        {
            if (n % 3 == 0)
            {
                goto jump;
            }

            ans = n / 6;
            n = n - (6 * ans);
            cnt += ans;
            cout << ans << " 6 ";
        }
    jump:
        if (n >= 3)
        {
            ans = n / 3;
            n = n - (3 * ans);
            cnt += ans;
            cout << ans << " 3 ";
        }
        if (n >= 1)
        {
            ans = n / 1;
            n = n - (1 * ans);
            cnt += ans;
            cout << ans << " 1 " << n << " ";
        }
    }

    cout << cnt << endl;
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
