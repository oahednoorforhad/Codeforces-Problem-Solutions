#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b, r,c,x, cnt=0;
    string s1, s2;
    cin>>s1;
    sort(s1.begin(), s1.end());
    for (int i = 0; i < s1.length(); i++)
    {
        if (s1[i]!=s1[i+1])
        {
            cnt++;
        }
        
    }
    //cout<<s1<<endl<<s2;
    if (cnt%2==0)
    {
        cout<<"CHAT WITH HER!"<<endl;
    }
    else if (cnt%2!=0)
    {
        cout<<"IGNORE HIM!"<<endl;
    }
}
