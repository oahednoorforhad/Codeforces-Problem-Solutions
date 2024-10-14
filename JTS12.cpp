#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,Atot=0,Dtot=0;
    string s;
    cin>>n>>s;
    for (int i = 0; i < n; i++)
    {
        if(s[i]=='A')
        {
            Atot+=1;
        }
        else if(s[i]=='D')
        {
            Dtot+=1;
        }
    }
    if (Atot>Dtot)
    {
        cout<<"Anton"<<endl;
    }
    else if(Atot<Dtot)
    {
        cout<<"Danik"<<endl;
    }
    else if(Atot==Dtot)
    {
        cout<<"Friendship"<<endl;
    }
}