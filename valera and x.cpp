#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n, cnt = 0;
    cin >> n;
    map<char, int> mp;
    char arr[400][400], f = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
            mp[arr[i][j]]++;
        }
    }
    char x = arr[0][0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i][i] == x)
        {
            cnt++;
        }
    }
    int j = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        if (arr[j][i] == x)
        {
            cnt++;
        }
        j++;
    }
    if (cnt == (n + n) && mp[arr[0][1]] == (n * n - (cnt - 1)))
    {
        cout << "YES";
    }
    else
        cout << "NO";
}