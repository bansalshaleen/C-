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
        ll a,b;
        cin>>a>>b;
        ll c,d;
        d=max(a,b);
        c=min(a,b);
        if(d>=(2*c))
        {
            cout<<c<<endl;
        }
        else 
        {
            ll ans=0;
            ans+=(d-c);
            c-=ans;
            d=c;
            ll cnt=0;
            cnt=c/3;
            ans+=(2*cnt);
            cnt=c%3;
            if(cnt==2)
                ans++;
            cout<<ans<<endl;
        }
    }
    return 0;
}