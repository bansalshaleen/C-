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

void solve()
{
    ll n,k;
    cin>>n>>k;
    ve<ll> v(n,0);
    for (ll i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    ve<ll> v1;
    for (ll i = 1; i < n-1; i++)
    {
        if((v[i]>v[i-1])&&(v[i]>v[i+1]))
        {
            v1.pb(i);
        }
    }
    ll pot=0;
    ll ans=0;
    for (ll i = 0; i < n; i++)
    {
        auto pt=upper_bound(v1.begin(),v1.end(),i);
        auto lst=lower_bound(v1.begin(),v1.end(),i+k-1);
        ll cnt=(lst-pt);
        if(ans<cnt)
        {
            ans=cnt;
            pot=i;
        }
    }
    cout<<ans+1<<" "<<pot+1<<endl;
    
    
}


int main()
{
    FAST;
    ll t;
    cin>>t;
    while (t--)
    {
        solve();
    }
    
    return 0;
}
