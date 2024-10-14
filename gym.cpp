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
    int n, chest = 0, biceps = 0, back = 0;
    cin >> n;
    vector<int> v;
    v.push_back(0);
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    for (int i = 1; i <= n; i++)
    {
        if (i % 3 == 1)
        {
            chest += v[i];
        }
        else if (i % 3 == 2)
        {
            biceps += v[i];
        }
        else if (i % 3 == 0)
        {
            back += v[i];
        }
    }
    if (chest > biceps && chest > back)
    {
        cout << "chest";
    }
    else if (biceps > chest && biceps > back)
    {
        cout << "biceps";
    }
    else if (back > chest && back > biceps)
    {
        cout << "back";
    }
}