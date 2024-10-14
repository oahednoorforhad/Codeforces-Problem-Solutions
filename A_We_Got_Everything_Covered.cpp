#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string str = "";
        for (int i = 0; i < n; i++)
        {
            for (int i = 97; i < k + 97; i++)
            {
                str += i;
            }
        }
        cout << str << endl;
    }
}