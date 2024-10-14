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
        int a, b, cnt = 0;
        cin >> a >> b;
        if (a % b == 0)
            cout << "0" << endl;
        else
        {
            cout << b - (a % b) << endl;
        }
    }
}