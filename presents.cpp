#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int arr[100], arr2[100];
    for (int i = 1; i <= t; i++)
    {
        cin >> arr[i];
    }
    for (int i = 1; i <= t; i++)
    {
        for (int j = 1; j <= t; j++)
        {
            if (arr[j] == i)
                cout << j << " ";
        }
    }
}
