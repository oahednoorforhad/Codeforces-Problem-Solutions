#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int both, alice, bob, none, alicem=0,bobm=0;
        cin >> both >> alice >> bob >> none;
        while (alicem >=0 && bobm>=0)
        {
            if (both>0)
            {
                alicem = both;
                bobm = both;
                both = 0;
                if (alice<bob)
                {
                    bobm -= alicem;
                }
                
            }
            
            
            
        }
        
    }
    
}