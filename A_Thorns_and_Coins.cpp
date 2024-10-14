#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, cnt = 0, pos = 0, flag = 0;
        cin >> n;
        string str;
        cin >> str;
        for (int i = 0; i < n; i++)
        {
            if (str[i] == '*' && str[i + 1] == '*')
            {
                flag = 1;
                pos = i;
                break;
            }
        }
        if (flag == 0)
        {
            for (int i = 0; i < n; i++)
            {
                if (str[i] == '@')
                {
                    cnt++;
                }
            }
        }
        else
        {
            for (int i = 0; i < pos; i++)
            {
                if (str[i] == '@')
                {
                    cnt++;
                }
            }
        }
        cout << cnt << endl;
    }
}