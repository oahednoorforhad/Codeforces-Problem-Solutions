#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin>>n;
        string str,str2, temp;
        cin>>str;
        for (int j = 0; j < n; j++)
        {
            if(str[j+1]!='0' && str[j+2]!='0')
            {
                //cout<<char((int(str[j])-49) + 97)<<endl;
                str2 += char((int(str[j])-49) + 97);
            }
            else if(str[j]!='0' && str[j+1]!='0' && str[j+2]=='0')
            {
                //cout<<char(((int(str[j])-49+1)*10)+(int(str[j+1])-49)+97)<<endl;
                //cout<<char((int(temp)-49)+(int(str[j+1])-49)+97)<<endl;
                str2 += char(((int(str[j])-49+1)*10)+(int(str[j+1])-49)+97);
                j+=2;
            }
        }
        cout<<str2<<endl;
    }
}