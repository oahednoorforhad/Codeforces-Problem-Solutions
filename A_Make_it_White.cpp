#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, start = 0, end = 0;
        string str;
        cin >> n >> str;
        if (n < 2)
        {
            cout << 1 << endl;
            continue;
        }

        for (int i = 0; i < str.length(); i++)
        {
            if (str[i] == 'B')
            {
                start = i + 1;
                break;
            }
        }
        // cout << start;
        for (int i = str.length() - 1; i >= 0; i--)
        {
            if (str[i] == 'B')
            {
                end = i + 1;
                break;
            }
        }
        // cout << end;
        cout << end - start + 1 << endl;
    }
}