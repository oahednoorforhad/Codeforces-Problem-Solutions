#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b, r,c,x,f,l, cnt=0,j,police=0,crime=0;
    vector<int>vi;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        vi.push_back(x);
    }

    // for (int i = 0; i < n; i++)
    // {
    //     //cout<<vi[i]<<'-'<<cnt<<'-'<<vi[i+1]<<endl;
    //     if (vi[i]>0)
    //     {
    //         cout<<i<<endl;
    //         f=i;
    //         break;
    //     }
    // }
    // for (int j = n-1; j >= 0; j--)
    // {
    //     //cout<<vi[i]<<'-'<<cnt<<'-'<<vi[i+1]<<endl;
    //     if (vi[j]<0)
    //     {
    //         cout<<j<<endl;
    //         l=j;
    //         break;
    //     }
    // }
    // for (int i = f; i <= l; i++)
    // {
    //     cnt+=vi[i];
    //     cout<<cnt<<endl;
    // }
    // cout<<f+abs(cnt)<<endl;
    for (int i = 0; i < n; i++)
    {
        if (vi[i]>0)
        {
            police+=vi[i];
        }
        if (vi[i]<0)
        {
            if(police==0)
            {
                crime++;   // 2, 
            }
            else if(police>0)
            {
                police--; // 
            }
        }
    }
    cout<<crime;
    
}
