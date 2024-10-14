#include <bits/stdc++.h>
using namespace std;
// #define for(i,n) for(int i = 0; i < n; i++)
#define ll long long
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        int arr[100][100], save = 0;
        int frq[100] = {0};
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n - 1; j++)
            {
                int x;
                cin >> x;
                arr[i][j] = x;
                if (j == 0)
                {
                    frq[arr[i][j]]++;
                }
            }
        }
        int max = 0, use = 0;
        for (int i = 0; i < n + 1; i++)
        {
            // cout << frq[i] << " ";
            if (frq[i] > max)
            {
                max = frq[i];
                use = i;
            }
        }
        // cout << use;
        for (int i = 0; i < n; i++)
        {
            if (arr[i][0] != use)
            {
                save = i;
            }
        }
        cout << use;
        for (int i = 0; i < n - 1; i++)
        {
            cout << " " << arr[save][i];
        }
        cout << endl;
    }
}