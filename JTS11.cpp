#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, h,mw=0;
    vector<int>vi;
    cin>>n>>h;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        vi.push_back(x);
    }
    for (int i = 0; i < n; i++)
    {
        if(vi[i]>h)
        {
            mw+=2;
        }
        else if(vi[i]<=h)
        {
            mw+=1;
        }
    }
    cout<<mw<<endl;


}