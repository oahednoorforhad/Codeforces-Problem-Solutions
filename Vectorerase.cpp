#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    vector<int> v;
    int n;
    cin>> n;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    int x;
    cin>>x;
    int a,b;
    cin>>a>>b;
    v.erase(v.begin()+x-1);
    v.erase(v.begin()+a-1,v.begin()+b-1);
    cout<<v.size()<<endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
   // cout<<v[v.size()];
}
