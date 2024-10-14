#include <bits/stdc++.h>
using namespace std;
#define ll long long
void display(set<char> s)
{
    set<char>::iterator itr;
    // Displaying set elements
    for (itr = s.begin();
         itr != s.end(); itr++)
    {
        cout << *itr << " ";
    }
}
int main()
{
    string str;
    getline(cin, str);
    // cout << str;
    set<char> st;
    for (int i = 0; i < str.size(); i++)
    {
        // cout << str[i];
        if (str[i] >= 'a' && str[i] <= 'z')
        {

            st.insert(str[i]);
        }
    }
    // display(st);
    cout << st.size();
}