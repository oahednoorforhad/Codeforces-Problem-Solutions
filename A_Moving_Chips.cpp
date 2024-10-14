#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, fone = 0, lone = 0, cnt = 0;
        cin >> n;
        vector<int> vc;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            vc.push_back(x);
        }
        for (int i = 0; i < n; i++)
        {
            if (vc[i] == 1)
            {
                fone = i;
                break;
            }
        }
        for (int i = n - 1; i >= 0; i--)
        {
            if (vc[i] == 1)
            {
                lone = i;
                break;
            }
        }
        for (int i = fone; i <= lone; i++)
        {
            if (vc[i] == 0)
            {
                cnt++;
            }
        }
        cout << cnt << endl;
    }
}