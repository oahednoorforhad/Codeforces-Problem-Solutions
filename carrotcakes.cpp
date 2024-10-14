#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, t, k, d, t1 = 0, t2 = d;
    cin >> n >> t >> k >> d;
    
    while (n > 0)
    {
        n = n - k;
        t1 += t;
    }

    cout<<t1;
    // if (t2 > t1)
    //     cout << "Yes";
    // else
    //     cout << "No";
}