#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        double n;
        cin >> n;
        vector<int> vec;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            vec.push_back(x);
        }
        if (n < 2)
        {
            cout << "YES" << endl;
            continue;
        }
        int maxE = *max_element(vec.begin(), vec.end());
        int pos = distance(vec.begin(), max_element(vec.begin(), vec.end()));
        // cout << pos + 1 << " " << (n / 2);
        if (pos + 1 > floor(n / 2))
        {
            cout << "NO" << endl;
        }
        else
            cout << "YES" << endl;
    }
}