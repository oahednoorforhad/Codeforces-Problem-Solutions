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
    string str, str2, str3;
    cin >> str >> str2 >> str3;
    str = str + str2;
    sort(str.begin(), str.end());
    sort(str3.begin(), str3.end());
    if (str == str3)
    {
        cout << "YES";
    }
    else
        cout << "NO";
}