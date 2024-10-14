#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    map<int, int> mp;
    mp[1] = 1;
    for (int i = 2; i <= 200000; i++)
    {
        int sum = 0;
        if (i > 9)
        {
            int temp = i;
            while (temp != 0)
            {
                sum += temp % 10;
                temp = temp / 10;
            }
            mp[i] += mp[i - 1] + sum;
            continue;
        }
        mp[i] += mp[i - 1] + i;
    }

    while (t--)
    {
        int n;
        cin >> n;
        cout << mp[n] << endl;
    }
}