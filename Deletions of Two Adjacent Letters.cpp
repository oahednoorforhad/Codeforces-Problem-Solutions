#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, l, r, a, ans, pos = 0;
    string s;
    char c;
    cin >> n;
    while (n--)
    {
        bool x = false;
        cin >> s >> c;
        int len = s.size();
        // cout<<s[len-1];
        if (s[0] == c || s[len - 1] == c)
        {
            cout << "YES" << endl;
            continue;
        }
        for (int i = 2; i < s.size(); i += 2)
        {
            // cout<<s[i]<<" x ";
            if (s[i] == c)
            {
                x = true;
                cout << "YES" << endl;
                break;
            }
        }
        if (x == false)
            cout << "NO" << endl;
    }
}