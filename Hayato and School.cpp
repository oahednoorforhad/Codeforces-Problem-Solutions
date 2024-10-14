#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n],odd[3];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
            if(arr[i]%2!=0)
            {
                if(cnt>=3)
                    continue;
                cnt++;
                odd[cnt-1];
            }   
        }
        if (cnt<4)
        {
            cout<<"Yes"<<endl;
        }
                

    }
}   