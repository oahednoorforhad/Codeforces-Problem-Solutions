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
    int n;
    cin >> n;
    string str;
    for (int i = 1; i <= n; i++)
    {
        if (n == 1)
        {
            cout << "I hate it";
            return 0;
        }
        if (i % 2 == 0)
        {
            str += " I love";
        }
        else
            str += " I hate";
        if (i == n)
            continue;
        str += " that";
    }
    str += " it";
    cout << str;
}