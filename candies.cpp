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
        ll n, mihai = 0, bianca = 0;
        cin >> n;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
            if (x % 2 == 0)
            {
                mihai += x;
            }
            else
                bianca += x;
        }
        if (mihai > bianca)
        {
            cout << "Yes" << endl;
        }
        else
            cout << "No" << endl;
    }
}