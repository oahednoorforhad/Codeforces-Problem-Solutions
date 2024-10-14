#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, sum = 0, f = 0, cnt = 0;
        cin >> n;
        vector<int> v, maxf, minf;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            // int y=x;
            v.push_back(x);
        }
        sort(v.begin(), v.end());
        minf = v;
        sort(v.begin(), v.end(), greater<int>());
        maxf = v;
        for (int i = 0, j = 0; i < n && j < n; i += 2, j++)
        {
            v[i] = minf[j];
            v[i + 1] = maxf[j];
            // cout << v[i] << " " << v[i + 1];
        }
        for (int i = 0; i < n; i++)
        {
            if (sum == v[i])
            {
                f = 1;
                // cout << "No" << endl;
            }
            sum += v[i];
        }
        if (f == 0)
        {
            cout << "Yes" << endl;
            for (int i = 0; i < n; i++)
            {
                cout << v[i] << " ";
            }
            cout << endl;
        }
        else if (f == 1)
            cout << "No" << endl;
    }
}