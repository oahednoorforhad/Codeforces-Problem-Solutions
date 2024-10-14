#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int arr[100];
    for (int i = 1; i <= t; i++)
    {
        cin >> arr[i];
    }
    for (int i = 1; i <= t; i++)
    {
        if (i == 1)
        {
            cout << abs(arr[i] - arr[i + 1]) << " " << abs(arr[i] - arr[t]) << endl;
        }
        else if (i == t)
        {
            cout << abs(arr[i] - arr[i - 1]) << " " << abs(arr[i] - arr[t - i + 1]) << endl;
        }
        if (abs(arr[i] - arr[i + 1]) > abs(arr[i] - arr[i - 1]))
            cout << abs(arr[i] - arr[i - 1]) << " ";
        else
            cout << abs(arr[i] - arr[i + 1])<< " ";
        if (/* condition */)
        {
            /* code */
        }
        
    }
}
