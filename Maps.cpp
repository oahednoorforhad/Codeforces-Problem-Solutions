#include <bits/stdc++.h>
using namespace std;
int main()
{
    map <string, int> mp;
    int t;
    cin>>t;
    while (t--)
    {
        int q,z;
        string y;
        cin>>q;
        if (q==1)
        {
            cin>>y>>z;
            if (mp.find(y)!=mp.end())
            {
                mp[y]+=z;
            }
            else
                mp.insert(make_pair(y,z));
        }
        else if (q==2)
        {
            cin>>y;
            mp.erase(y);
        }
        else if(q==3)
        {
            cin>>y;
            if(mp.find(y)!=mp.end())
            {
                cout<<mp[y]<<endl;
            }
            else
                cout<<mp[y]<<endl;
        }
    } 
}