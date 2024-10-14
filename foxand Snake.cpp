#include <bits/stdc++.h>
using namespace std;
#define ll long long
bool isPrime(int n)
{
    if (n <= 1)
        return false;
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;
    return true;
}

int main()
{
    int m, n;
    cin >> m >> n;
    char arr[m][n];
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i % 2 == 0 && i % 4 == 0)
            {
                if (j != 1)
                {
                    arr[i][j] = '.';
                }
                else
                    arr[i][j] = '#';
            }
            else if (i % 2 == 0 && i % 4 != 0)
            {
                if (j != n)
                {
                    arr[i][j] = '.';
                }
                else
                    arr[i][j] = '#';
            }
            else
            {
                arr[i][j] = '#';
            }
            cout << arr[i][j];
        }
        cout << endl;
    }
}