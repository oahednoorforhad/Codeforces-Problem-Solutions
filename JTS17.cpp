#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,cnt=0, solve=0;
    cin>>a;
    int arr[10];
    for (int i = 0; i < a; i++)
    {
            for (int i = 0; i < 3; i++)
        {
            cin>>arr[i];
        }
        cnt=0;
        for (int i = 0; i < 3; i++)
            {
                if(arr[i]==1)
                {
                    cnt++;
                }
            }
        if (cnt>1)
        {
            solve++;
        }
    }
    cout<<solve<<endl;
    
}
