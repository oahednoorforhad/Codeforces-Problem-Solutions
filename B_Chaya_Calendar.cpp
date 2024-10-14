#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        double n, yc = 0;
        double temp = 0;
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
            if (vc[i] > yc)
            {
                yc = vc[i];
            }
            else if (yc == vc[i])
            {
                yc = (vc[i] * 2);
            }
            else
            {
                if (fmod(yc, vc[i]) == 0)
                {
                    temp = (yc / vc[i]);
                    yc = vc[i] * (temp + 1); 
                }
                temp = ceil(yc / vc[i]);
                yc = vc[i] * temp;
            }
        }
        int ans = int(yc);
        cout << ans << endl;
    }
}