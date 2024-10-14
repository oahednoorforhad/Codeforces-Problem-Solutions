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
    int n, t;
    cin >> n >> t;
    string str;
    cin >> str;
    while (t--)
    {
        for (int i = 0; i < n - 1; i++)
        {
            if (str[i] == 'B' && str[i + 1] == 'G')
            {
                swap(str[i], str[i + 1]);
                i++;
                // cout << str;
            }
        }
    }
    cout << str;
}