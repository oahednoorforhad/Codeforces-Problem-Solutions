#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x;
        int arr[x];
        arr[1] = 1, arr[x] = 2;
        for (int i = 3; i <= x; i++)
        {
            arr[i - 1] = i;
        }
        for (int i = 1; i <= x; i++)
        {
            cout << arr[i] << " ";
        }
        cout<<endl;
    }
}