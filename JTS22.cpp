#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b, r,c,x, cnt=0;
    string s1, s2;
    cin>>s1;
    for (int i = 0; i < s1.length(); i++)
    {
        if (s1[i]>='A' && s1[i]<='Z')
        {
            cnt++;
        }
    }
    if (cnt>s1.length()-cnt)
    {
        for (int i = 0; i < s1.length(); i++)
        {
            if (s1[i]>='a' && s1[i]<='z')
            {
                s1[i]-=32;
            }
        }
    }
    if (cnt<=s1.length()-cnt)
    {
        for (int i = 0; i < s1.length(); i++)
        {
            if (s1[i]>='A' && s1[i]<='Z')
            {
                s1[i]+=32;
            }
        }
    }
    
    cout<<s1<<endl;
}
