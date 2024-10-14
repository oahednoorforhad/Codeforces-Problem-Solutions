#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        vector<int> v;
        int n, rec = 0, sum = 0, sum2 = 0, count = 0;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            sum2 += x;
            v.push_back(x);
            if (x == -1)
            {
                count++;
            }
        }
        // cout<<sum2<<endl;
        for (int i = 0; i < n - 1; i++)
        {
            if (v[i] == -1 && v[i + 1] == -1)
            {
                rec = 1;
                break;
            }
        }
        if (count >= 2 && rec == 1)
        {

            cout << sum2 + 4 << endl;
        }
        else if (count == 0)
            cout << sum2 - 4 << endl;
        else
            cout<<sum2<<endl;
    }
}