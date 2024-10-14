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
    string str, str2, ans;
    cin >> str >> str2;
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == '0' && str2[i] == '0')
        {
            ans += '0';
        }
        else if ((str[i] == '1' && str2[i] == '0') || (str[i] == '0' && str2[i] == '1'))
        {
            ans += '1';
        }
        else if (str[i] == '1' && str2[i] == '1')
        {
            ans += '0';
        }
    }
    cout << ans;
}