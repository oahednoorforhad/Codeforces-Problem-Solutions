#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string str = "aaa";
        if (n <= 28)
        {
            n = n - 2;
            str[2] = 96 + n;
        }
        else if (n > 28 && n < 54)
        {
            n = n - 27;
            str[2] = 'z';
            str[1] = 96 + n;
        }
        else if (n < 79 && n >= 54)
        {
            n = n - 52;
            str[1] = 'z';
            str[2] = 'z';
            str[0] = 96 + n;
        }
        // sort(str.begin(), str.end());
        cout << str << endl;
    }
}