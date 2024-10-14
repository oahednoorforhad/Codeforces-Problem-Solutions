#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n, b, d, waste = 0, cnt = 0;
    vector<int> v;
    cin >> n >> b >> d;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    for (int i = 0; i < n; i++)
    {
        if (v[i] <= b)
        {
            waste += v[i];
        }
        if (waste > d)
        {
            cnt++;
            waste = 0;
        }
    }
    cout << cnt;
}