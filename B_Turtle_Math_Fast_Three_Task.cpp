#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, sum = 0, f = 0;
        cin >> n;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            sum += x;
            v.push_back(x);
        }
        if (sum % 3 == 0)
        {
            cout << 0 << endl;
            continue;
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                // cout << v[i] << " ";
                if ((sum - v[i]) % 3 == 0)
                {
                    cout << 1 << endl;
                    f = 1;
                    break;
                }
                else if ((sum + 1) % 3 == 0)
                {
                    cout << 1 << endl;
                    f = 1;
                    break;
                }
            }
            if (f == 0)
                cout << 2 << endl;
        }
    }
}