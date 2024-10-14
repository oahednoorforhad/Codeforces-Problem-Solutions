#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n, x, sum1 = 0, sum2 = 0, f = 0;
    cin >> n;
    string str;
    cin >> str;
    for (int i = 0; i < n; i++)
    {
        // cout << str[i];
        if (str[i] == '4' || str[i] == '7')
        {
            // cout << str[i];
            if (i < (n / 2))
            {
                sum1 += str[i];
            }
            else
                sum2 += str[i];
        }
        else
        {
            f = 1;
            break;
        }
    }
    // cout << sum1 << " " << sum2;
    if (sum1 == sum2 && f != 1)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}