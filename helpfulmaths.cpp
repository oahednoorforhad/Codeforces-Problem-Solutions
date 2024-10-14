#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    string s;
    vector<int> v;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= '1' && s[i] <= '3')
        {
            v.push_back(s[i] - 48);
        }
    }
    sort(v.begin(), v.end());
    cout << v[0];
    for (int i = 1; i < v.size(); i++)
    {
        cout << '+' << v[i];
    }
}