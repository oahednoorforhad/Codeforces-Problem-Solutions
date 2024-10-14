#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<char> vt;
        for (int i = 0; i < n; i++)
        {
            int k;
            cin >> k;
            vt.push_back(k);
        }
        string str;
        for (int i = 0; i < n; i++)
        {
            str[i] = '*';
        }

        int full = n;
        char trace = 48;
        char keeptrace = 'a';
        while (full != 0)
        {
            for (int i = 0; i < n; i++)
            {
                cout << vt[i];
            }

            cout << full << endl;
            int cnt = 0;
            for (int i = 0; i < n; i++)
            {
                if (vt[i] == trace)
                {
                    cout << keeptrace << " " << trace << " " << vt[i];
                    vt[i] == 'x';
                    str[i] = keeptrace;
                    trace++;
                    cnt++;
                }
                cout << endl;
            }
            trace = 0;
            keeptrace++;
            full -= cnt;
        }
        cout << str << endl;
    }
}