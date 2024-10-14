#include <bits/stdc++.h>
using namespace std;
int main()
{
    while (2)
    {
        double a, b, c, x;
        cin >> a >> b;
        if (a == 0 && b == 0)
        {
            break;
        }
        else
        {
            c = (a / 2) + (a/8);
            x = sqrt((c * c) - (a - c) * (a - c));
            b = b - x;
            cout << c + c + b << endl;
        }
    }
}