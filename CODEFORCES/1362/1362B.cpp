
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
    while(t--)
    {
        ll n,o;
        cin>>n;
        ll arr[10]={0};
        set<ll> s;
        ve<ll> v(n,0);
        for (ll i = 0; i < n; i++)
        {
            //cin>>v[i];
            cin>>o;
            s.insert(o);
            v[i]=o;
        }
        ll ans=0;
        for (ll i = 1; i < 1024; i++)
        {
            /* code */
            bool fg=0;
            for (ll j = 0; j < n; j++)
            {
                /* code */
                if(s.count((v[j]^i))==0)
                {
                    fg=1;
                    br;
                }
            }
            if(!fg)
            {
                ans=i;
                br;
            }
        }
        if(ans==0)
            cout<<-1<<endl;
        else 
            cout<<ans<<endl;        
        
    }

    return 0;
}