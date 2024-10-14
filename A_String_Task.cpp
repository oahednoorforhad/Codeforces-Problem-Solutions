#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    string str;
    cin >> str;
    vector<char> vc;
    for (int i = 0; i < str.length(); i++)
    {
        // cout << str[i] << " out ";
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'y' ||
            str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U' || str[i] == 'Y')
        {
            continue;
        }
        else
        {
            vc.push_back('.');
            if (str[i] > 64 && str[i] < 91)
            {
                vc.push_back(str[i] + 32);
            }
            else
                vc.push_back(str[i]);
        }
    }
    for (int i = 0; i < vc.size(); i++)
    {
        cout << vc[i];
    }
}