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
    int n, p, q, cnt = 0;
    cin >> n;
    while (n--)
    {
        cin >> p >> q;
        if (p < q && p != q - 1)
        {
            cnt++;
        }
    }
    cout << cnt << endl;
}