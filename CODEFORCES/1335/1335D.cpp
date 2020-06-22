#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
 
using namespace __gnu_pbds;
using namespace std;
 
typedef   long long int ll;
typedef unsigned long long int sll;
typedef long double ld;
#define A 1000000007ll
#define B 998244353ll
#define FAST ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define pb push_back
#define mxe(v) *max_element(v.begin(),v.end())
#define mne(v) *min_element(v.begin(),v.end())
#define bs binary_search
#define lb lower_bound
#define ub upper_bound
#define ve vector
#define cc continue
#define br break
#define PI 3.1415926535



int main()
{
    FAST;
    ll t;
    cin>>t;
    while (t--)
    {
        ve<ve<char>> v(9,ve<char>(9,'0'));

        for (ll i = 0; i < 9; i++)
        {
            for (ll j = 0; j < 9; j++)
            {
                cin>>v[i][j];
            }
            
        }
        ll row=0;
        //bool fg=0;
        for (ll i = 0; i < 9; i++)
        {
            if(i==0)
            {
                row=0;
                //fg=1;
            }
            else if(i==3)
            {
                row=1;
            }
            else if(i==6)
            {
                row=2;
            }

            if(v[i][row]!='9')
            v[i][row]='9';
            else
            {
                v[i][row]='8';
            }
            
            row+=3;
        }
        
        for (ll i = 0; i < 9; i++)
        {
            for (ll j = 0; j < 9; j++)
            {
                cout<<v[i][j];
            }
            cout<<endl;
            
        }
        
    
    }


    return 0;
}