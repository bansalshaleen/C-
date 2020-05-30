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
    ll n;
    cin>>n;

    ve<ve<ll> >v(n,ve<ll> (2,0));
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < 2; j++)
        {
            cin>>v[i][j];
        }
        
    }
    bool fg=0;
    if(n%2==1)
    {
        fg=1;
    }
    else
    {
        ld pmdx, pmdy, mdx, mdy;
        mdx=v[0][0]+v[n/2][0];
        mdy=v[0][1]+v[n/2][1];
        pmdx=mdx;
        pmdy=mdy;
        for (ll i = 1; i < n/2; i++)
        {
            
            mdx=v[i][0]+v[n/2+i][0];
            mdy=v[i][1]+v[n/2+i][1];
            if(mdx!=pmdx||mdy!=pmdy)
            {
                fg=1;
                br;
            }
        }
        
    }
    if(fg)
        cout<<"NO"<<endl;
    else
    {
        cout<<"YES"<<endl;
    }
    

    return 0;
}