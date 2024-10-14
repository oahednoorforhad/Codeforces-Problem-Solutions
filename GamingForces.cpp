#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, cnt = 0, ans = 0;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == 1)
                cnt++;
        }
        if (cnt % 2 == 0)
        {
            ans = n - cnt + (cnt / 2);
        }
        else if (cnt == 1)
        {
            ans = n;
        }
        else if (cnt != 0)
        {
            ans = floor(cnt / 2) + (cnt % 2) + (n - cnt);
        }
        cout << ans << endl;
    }
}