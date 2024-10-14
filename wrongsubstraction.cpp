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
    int k;
    string n;
    cin >> n >> k;
    while (k--)
    {
        // cout << i;
        if (n[n.size() - 1] != '0')
        {
            //
            n[n.size() - 1] -= 1;
        }
        else
            n.erase(n.size() - 1);
    }
    cout << n;
}