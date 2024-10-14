#include<bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int size, int key)
{
    int s=0,e=size;
    while (s<=e)
    {
        int mid=(s+e)/2;
        if (arr[mid]==key)
        {
            return mid;
        }
        else if (arr[mid]<key)
        {
            s=mid+1;
        }
        else
        {
            e=mid-1;
        }
    }
    return -1;
}
int main()
{
    int n;
    cin>>n;
    int ar[n],key;
    
    for (int i = 0; i < n; i++)
    {
        cin>>ar[i];
    }
    cin>>key;
    cout<<binarySearch(ar,n,key);

}