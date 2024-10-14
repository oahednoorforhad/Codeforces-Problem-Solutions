#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    double n, t, k, d;
    cin >> n >> t >> k >> d;
    if (n < k)
    {
        cout << "NO";
        return 0;
    }
    else
    {
        double cycle = ceil(n / k);
        double t1 = ((cycle - 1) * t);
        if (t1 > d)
        {
            cout << "YES";
        }
        else
            cout << "NO";
    }
}