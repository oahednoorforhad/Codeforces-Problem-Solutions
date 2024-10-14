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
    string str;
    cin >> str;
    if (str[0] >= 'A' && str[0] <= 'Z')
    {
        cout << str;
        return 0;
    }

    str[0] = str[0] - 32;
    cout << str;
}
