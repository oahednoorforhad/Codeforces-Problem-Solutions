#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n, k;
    cin >> n >> k;
    if (k <= (n / 2) + 1)
    {
        cout << (k * 2) - 1;
    }
    else if (n % 2 == 0 && k <= (n / 2))
    {
        cout << (k - (n / 2) - 1) * 2;
    }
    else if (k >= (n / 2))
    {
        cout << (k - (n / 2)) * 2;
    }
}