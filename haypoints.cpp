#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t, n;
    cin >> t >> n;
    map<string, int> mp;
    while (t--)
    {
        string str;
        int x;
        cin >> str >> x;
        mp[str] = x;
    }

    while (n--)
    {
        int salary = 0;
        while (true)
        {
            string str;
            cin >> str;
            if (mp[str] != 0)
            {
                salary += mp[str];
            }
            if (str == ".")
            {
                break;
            }
        }
        cout << salary << endl;
    }
}