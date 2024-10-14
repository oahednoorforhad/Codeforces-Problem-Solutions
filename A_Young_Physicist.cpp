#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    int sumx = 0, sumy = 0, sumz = 0;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        sumx += a;
        sumy += b;
        sumz += c;
    }
    if (sumx == 0 && sumy == 0 && sumz == 0)
    {
        cout << "YES";
    }
    else
        cout << "NO";
}

