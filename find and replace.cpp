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
        ll n, f = 0;
        cin >> n;
        string str;
        cin >> str;
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (str[i] == str[j])
                {

                    if ((j - i) % 2 != 0)
                    {
                        // cout << j + 1 << '-' << i + 1 << " ";
                        f = 1;
                        break;
                    }
                }
            }
        }
        if (f == 0)
        {
            cout << "Yes" << endl;
        }
        else
            cout << "No" << endl;
    }
}