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
    int t, cnt = 0;
    cin >> t;
    vector<int> h, a;
    for (int i = 0; i < t; i++)
    {
        int x, y;
        cin >> x >> y;
        h.push_back(x);
        a.push_back(y);
    }
    for (int i = 0; i < t; i++)
    {
        for (int j = 0; j < t; j++)
        {
            if (h[i] == a[j])
            {
                cnt++;
            }
        }
    }
    cout << cnt;
}