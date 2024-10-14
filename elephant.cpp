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
    int n, ans = 0;
    cin >> n;

    while (n != 0)
    {
        if (n <= 5)
        {
            ans += 1;
            break;
        }
        n = n - 5;
        ans++;
    }
    cout << ans;
}