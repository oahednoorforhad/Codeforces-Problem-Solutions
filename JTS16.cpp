#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,cnt=0;
    cin>>a>>b;
    while(1)
    {
        a*=3;
        b*=2;
        cnt++;
        if (a>b)
        {
            cout<<cnt<<endl;
            break;
        }
        
    }
}