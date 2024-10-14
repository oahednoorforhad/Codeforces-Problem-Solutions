#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    set<ll> st;
    for (int i = 0; i < t; i++)
    {
        ll x;
        cin >> x;
        st.insert(x);
    }
    cout << st.size() - 2;
}