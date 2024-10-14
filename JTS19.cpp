#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b, r,c,x;
    cin>>n;
    vector<int>vi,vis;
    for (int i = 0; i < n; i++)
    {
        cin>>x;
        vi.push_back(x);
    }
    vis=vi; 
    sort(vis.begin(), vis.end());
    if (vis==vi)
    {
        for(auto x:vi)
        cout<<x<<" ";
    }
    else
    {
        for(auto x:vis)
        cout<<x<<" ";
    }
}
