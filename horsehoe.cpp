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
    map<int, int> mp;
    int t = 4;
    while (t--)
    {
        int x;
        cin >> x;
        mp[x]++;
    }
    if (mp.size() < 4)
    {
        cout << 4 - mp.size();
    }
    else
        cout << "0";
}