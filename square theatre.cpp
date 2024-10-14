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
    double m, n, a;
    cin >> m >> n >> a;
    ll ans = (ceil(m / a) * ceil(n / a));
    cout << ans;
}