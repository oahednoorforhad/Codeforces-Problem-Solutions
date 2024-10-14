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
    ll n, temp, cnt = 0;
    cin >> n;
    string s = to_string(n);
    int size = s.size();
    for (int i = 0; i < size; i++)
    {
        temp = n % 10;
        if (temp == 7 || temp == 4)
        {
            cnt++;
        }
        // cout << n << endl;
        n = n / 10;
    }
    if (cnt == 4 || cnt == 7)
    {
        cout << "YES";
    }
    else
        cout << "NO";
}