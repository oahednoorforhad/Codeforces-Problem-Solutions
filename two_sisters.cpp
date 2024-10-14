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
    ll t;
    cin >> t;
    while (t--)
    {
        double n;
        cin >> n;
        if (floor(n / 2) != ceil(n / 2))
        {
            int ans = floor(n / 2);
            cout << ans << endl;
        }
        else
        {
            int ans = (n / 2) - 1;
            cout << ans << endl;
        }
    }
}