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
    while(t--)
    {
        ll n;
        cin>>n;
        ve<ll> a(n,0),b(n,0);
        ve<ll> sa(n+1,0),sb(n+1,0);
        for (ll i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        for (ll i = 0; i < n; i++)
        {
            cin>>b[i];
        }
        for (ll i = 1; i < n+1; i++)
        {
            sa[i]=sa[i-1]+a[i-1];
        }
        for (ll i = 1; i < n+1; i++)
        {
            sb[i]=sb[i-1]+b[i-1];
        }
        ll ans=0;
        for (ll i = 0; i < n; i++)
        {
            if(sa[i]==sb[i])
            {
                if(a[i]==b[i])
                    ans+=a[i];
            }
        }
        cout<<ans<<endl;
        
        
        
    }

    return 0;
}