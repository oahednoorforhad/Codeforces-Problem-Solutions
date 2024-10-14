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
    int n;
    cin >> n;
    while (n--)
    {
        int x, sumf = 0, suml = 0;
        cin >> x;
        for (int i = 1; i <= 3; i++)
        {
            suml += x % 10;
            x /= 10;
        }
        for (int i = 1; i <= 3; i++)
        {
            sumf += x % 10;
            x /= 10;
        }
        if (sumf == suml)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}