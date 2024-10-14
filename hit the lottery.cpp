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
    int n, cnt = 0;
    cin >> n;
    while (n != 0)
    {
        // cout << n;
        if (n >= 100)
        {
            n -= 100;
            cnt++;
        }
        else if (n >= 20)
        {
            n -= 20;
            cnt++;
        }
        else if (n >= 10)
        {
            n -= 10;
            cnt++;
        }
        else if (n >= 5)
        {
            n -= 5;
            cnt++;
        }
        else if (n >= 1)
        {
            n -= 1;
            cnt++;
        }
    }
    cout << cnt;
}