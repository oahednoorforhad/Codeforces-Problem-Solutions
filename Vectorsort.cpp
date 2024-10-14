#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    vector<int> v;
    int n;
    cin>> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    for (int i = 0; i < n-1; i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<v[v.size()-1];
    
}