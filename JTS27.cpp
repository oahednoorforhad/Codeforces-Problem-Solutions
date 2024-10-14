#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b, r,c,x, cnt=0;
    vector<int>vi;
    for (int i = 0; i < 4; i++)
    {
        int x;
        cin>>x;
        vi.push_back(x);
    }
    string s1;
    cin>>s1;
    for (int i = 0; i < s1.length(); i++)
    {
        if (s1[i]=='1')
        {
            cnt+=vi[0];
        }
        else if (s1[i]=='2')
        {
            cnt+=vi[1];
        }
        else if (s1[i]=='3')
        {
            cnt+=vi[2];
        }
        else if (s1[i]=='4')
        {
            cnt+=vi[3];
        }
    }
    cout<<cnt<<endl;
}
