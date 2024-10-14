#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, cnt = 0;
        cin >> a >> b;
        string str, str2, str3;
        cin >> str >> str2;
        reverse(str2.begin(), str2.end());
        str3 = str + str2;
        // cout << str3 << endl;
        for (int i = 0; i < (a + b) - 1; i++)
        {
            // cout << str3[i] << " " << str3[i + 1] << endl;
            if (str3[i] == str3[i + 1])
            {
                // cout << str3[i] << " " << str3[i + 1];
                cnt++;
            }
        }
        // cout << cnt << endl;
        if (cnt < 2)
        {
            cout << "Yes" << endl;
        }
        else
            cout << "No" << endl;
    }
}