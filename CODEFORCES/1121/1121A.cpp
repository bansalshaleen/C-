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

    ll n,m,k,o;
    cin>>n>>m>>k;
    ve<ll> p(n,0);
    ve<ll> v;
    ve<ll> sc(m+1,0);
    for (ll i = 0; i < n; i++)
    {
        cin>>p[i];
    }
    for (ll i = 0; i < n; i++)
    {
        cin>>o;
        v.pb(o);
        if(p[i]>sc[o])
        {
            sc[o]=p[i];
        }
    }
    ll ans=k;
    for (ll i = 0; i < k; i++)
    {
        cin>>o;
        //cout<<sc[v[o-1]]<<" "<<p[o-1]<<endl;
        if(sc[v[o-1]]==p[o-1])
        {
            ans--;
        }
    }
    cout<<ans<<endl;
    


    return 0;
}
    

    