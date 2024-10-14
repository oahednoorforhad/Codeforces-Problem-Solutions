#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, cntr = 0, cntr2 = 0, flag = 999;
        cin >> n;
        char c[100][100];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> c[i][j];
                if (c[i][j] == '1' && flag == 999)
                {
                    flag = i;
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (c[flag][i] == '1')
            {

                cntr++;
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (c[flag + 1][i] == '1')
            {
                cntr2++;
            }
        }
        if (cntr != cntr2)
        {
            cout << "TRIANGLE" << endl;
        }
        else
            cout << "SQUARE" << endl;
    }
}