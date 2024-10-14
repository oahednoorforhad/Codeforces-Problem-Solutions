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
    string str, str2;
    cin >> str >> str2;
    reverse(str.begin(), str.end());
    if (str == str2)
    {
        cout << "YES";
    }
    else
        cout << "NO";
}