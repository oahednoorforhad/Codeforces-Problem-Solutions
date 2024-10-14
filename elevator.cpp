#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,d;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        int a,b,c;
        cin>>a>>b>>c;
        d=abs(b-c)+abs(c);
        cout<<a<<" "<<d<<endl;
        if (a>d)
        {
            cout<<"2"<<endl;
        }
        else if (a<d)
        {
            cout<<"1"<<endl;
        }
        else if(a==d)
            cout<<"3"<<endl;
        
    }

       
}