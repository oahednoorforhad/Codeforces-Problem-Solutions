#include <bits/stdc++.h>
using namespace std;
#define ll long long
bool isPrime(int n)
{
    // Corner case
    if (n <= 1)
        return false;

    // Check from 2 to n-1
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;

    return true;
}
int main()
{
    int n, m, f = 0;
    cin >> n >> m;
    if (isPrime(m))
    {
        for (int i = n + 1; i < m; i++)
        {
            if (isPrime(i))
            {
                f = 1;
            }
        }
    }
    else
    {
        cout << "NO";
        return 0;
    }

    if (f == 0)
        cout << "YES";
    else
        cout << "NO";
}
