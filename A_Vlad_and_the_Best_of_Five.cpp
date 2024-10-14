#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a = 0, b = 0;
        string str;
        cin >> str;
        for (int i = 0; i < 5; i++)
        {
            if (str[i] == 'A')
            {
                a++;
            }
            else
                b++;
        }
        if (a > b)
        {
            cout << "A" << endl;
        }
        else
            cout << "B" << endl;
    }
}