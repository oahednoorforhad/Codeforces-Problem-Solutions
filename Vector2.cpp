#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n, q;
    cin >> n >> q;
    vector<vector<int>> vec(n);
    while (q--)
    {
        ll que;
        cin >> que;
        if (que == 0)
        {
            ll r, x;
            cin >> r >> x;
            vec[r].push_back(x);
        }
        else if (que == 1)
        {
            ll r;
            cin >> r;
            ll save=vec[r].size();
            //cout<<save<<"    ";
            for (int i = 0; i < save-1; i++)
            {
                cout << vec[r][i] << " ";
                //save=i;
            }
            if (save!=0)
            {
                cout<<vec[r][save-1];
            }
            cout<<endl;
        }
        else if (que == 2)
        {
            ll r;
            cin >> r;
            vec[r].clear();
        }
    }
}