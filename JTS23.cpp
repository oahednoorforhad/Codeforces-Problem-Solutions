#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b, r,c,x, cnt=1;
    vector<int>vi;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        vi.push_back(x);
    }
    
    for (int i = 0; i < n-1; i++)
    {
        //cout<<vi[i]<<'-'<<cnt<<'-'<<vi[i+1]<<endl;
        if (vi[i]!=vi[i+1])
        {
            cnt++;
            //cout<<cnt<<endl;
        }
        
    }
    cout<<cnt<<endl;
}
