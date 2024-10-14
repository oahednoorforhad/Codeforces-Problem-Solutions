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
        double n, sum = 0;
        cin >> n;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            sum += x;
        }
        if (sum / n == 1)
        {
            cout << "0" << endl;
        }
        else if (sum < n)
        {
            cout << "1" << endl;
        }
        else
            cout << abs(sum) - n << endl;
    }
}