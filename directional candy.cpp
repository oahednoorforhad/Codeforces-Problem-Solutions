#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        string str;
        cin>>n;
        cin>>str;
        int x=0,y=0,f=0;
        for (int i = 0; i < n; i++)
        {
            if (str[i]=='U')
            {
                x+=1;
            }
            else if (str[i]=='D')
            {
                x-=1;
            }
            else if (str[i]=='R')
            {
                y+=1;
            }
            else
                y-=1;
            if (x==1 && y==1)
            {
                f=1;

                cout<<"YES"<<endl;
                break;
            }
        }
        if (f==0)
        {
            cout<<"NO"<<endl;
        }
        
    }
       
}