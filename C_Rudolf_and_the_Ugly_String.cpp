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
    int n, cnt = 0, f = 0;
    cin >> n;
    string str;
    cin >> str;
    string sam = "pie";
    string sam2 = "map";
    map<string, int> mp;
    for (int i = 0; i < n - 2; i++)
    {
        if (str.substr(i, 3) == sam)
        {
            mp[sam]++;
        }
        if (str.substr(i, 3) == sam2)
        {
            mp[sam2]++;
        }
        if (str.substr(i, 5) == "mapie")
        {
            mp["mapie"]++;
            mp["map"]--;
            mp["pie"]--;
        }
    }
    // map<string, int>::iterator it;
    // for (it = mp.begin(); it != mp.end(); it++)
    // {
    //     cout << it->first << " " << it->second;
    // }
    // cout << endl;
    int tot = mp["map"] + mp["pie"] + mp["mapie"];
    cout << tot << endl;
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
