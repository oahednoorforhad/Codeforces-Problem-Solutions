#include <bits/stdc++.h>
using namespace std;
#define ll long long
bool isPrime(int n)
{
    if (n <= 1)
        return false;
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;
    return true;
}

int main()
{
    ll n, k;
    cin >> n >> k;
    while (n--)
    {
        string x;
        cin >> x;
        sort(x.begin(), x.end());
        cout << x;
        // cout << char(48);
        map<int, int> mp;
        for (int i = 0; i <= k; i++)
        {
            cout << i;
            if (x.find(char(i + 48)))
            {
                cout << char(i + 48) << " ";
                mp[i]++;
            }
        }
        // for (auto i : mp)
        // {
        //     cout << i.second;
        // }
        cout << endl;
    }
}