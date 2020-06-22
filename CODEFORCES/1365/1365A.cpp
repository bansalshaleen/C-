#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
 
using namespace __gnu_pbds;
using namespace std;
 
typedef   long long int ll;
typedef unsigned long long int sll;
typedef long double ld;
#define A 100000000ll
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
        ll n,m;
        cin>>n>>m;
        ve<ve<ll>> v(n,ve<ll>(m,0));
        for (ll i = 0; i < n; i++)
        {
            for (ll j = 0; j < m; j++)
            {
                cin>>v[i][j];
            }
            
        }
        ll row=0, col=0;
        bool fg=0;
        for (ll i = 0; i < n; i++)
        {
            fg=0;
            for (ll j = 0; j < m; j++)
            {
                if(v[i][j]==1)
                {
                    fg=1;
                    br;
                }
            }
            if(!fg)
                row++;
            
        }
        for (ll i = 0; i < m; i++)
        {
            fg=0;
            for (ll j = 0; j < n; j++)
            {
                if(v[j][i]==1)
                {
                    fg=1;
                    br;
                }
            }
            if(!fg)
                col++;
            
        }
        ll ans=min(row,col);
        if(ans%2==1)
        {
            cout<<"Ashish"<<endl;
        }
        else
        {
            cout<<"Vivek"<<endl;
        }
        
        
    }
    

    return 0;
}