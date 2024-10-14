#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b, r,c,x, cnt=0;
    vector<int>vi;
    cin>>n;
    string s1;
    cin>>s1;
    for (int i = 0; i < n-1; i++)
    {
        //cout<<vi[i]<<'-'<<cnt<<'-'<<vi[i+1]<<endl;
        if (s1[i]==s1[i+1])
        {
            cnt++;
            //cout<<cnt<<endl;
        }
    }
    cout<<cnt<<endl;
}
