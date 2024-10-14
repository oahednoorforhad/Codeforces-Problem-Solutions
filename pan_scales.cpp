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
    int pos = str.find('|');

    if (str.size() / 2 > pos)
        str = str2 + str;
    else
        str = str + str2;

    pos = str.find('|');
    if (str.size() % 2 == 0)
    {
        cout << "Impossible";
    }
    else
    {
        str.erase(pos, 1);
        for (int i = 0; i < str.size() / 2; i++)
        {
            cout << str[i];
        }
        cout << "|";
        for (int i = str.size() / 2; i < str.size(); i++)
        {
            cout << str[i];
        }
    }
}