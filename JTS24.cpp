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
    int f=0, l=n-1, d=0, sereja=0, dima=0;
    for (int i = 0; i < n; i++)
    {
        if (d%2==0)
        {
            if(vi[f]>vi[l])
            {
                sereja+=vi[f];
                f++;
                //cout<<vi[f];
            }
            else 
            {
                sereja+=vi[l];
                l--;
                //cout<<vi[l];
            }
        }
        else if (d%2!=0)
        {
            if(vi[f]>vi[l])
            {
                dima+=vi[f];
                f++;
            }
            else
            {
                dima+=vi[l];
                l--;
            }
        }
        d++;
    }
    cout<<sereja<<" "<<dima<<endl;
}
