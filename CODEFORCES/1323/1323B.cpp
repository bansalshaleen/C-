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
    ll n,m,k;
    cin>>n>>m>>k;
    ve<ll> v1(n,0);
    ve<ll> v2(m,0);
    ve<ll> v3,v4;
    for (ll i = 0; i < n; i++)
    {
        cin>>v1[i];
    }
    for (ll i = 0; i < m; i++)
    {
        cin>>v2[i];
    }
    bool fg=0;
    ll ct=0;
    for (ll i = 0; i < n; i++)
    {
        if(v1[i]==1&&!fg)
        {
            fg=1;
            ct++;
        }
        else if(v1[i]==1&&fg)
            ct++;
        else if(fg&&v1[i]==0)
        {
            v3.pb(ct);
            ct=0;
        }
    }
    if(ct!=0)
        v3.pb(ct);
    ct=0;
    for (ll i = 0; i < m; i++)
    {
        if(v2[i]==1&&!fg)
        {
            fg=1;
            ct++;
        }
        else if(v2[i]==1&&fg)
            ct++;
        else if(fg&&v2[i]==0)
        {
            v4.pb(ct);
            ct=0;
        }
    }
    if(ct!=0)
        v4.pb(ct);
    ct=0;
    ve<ll> v5;
    v5.pb(1);
    for (ll i = 2; i <= sqrt(k); i++)
    {
        if(k%i==0)
        {
            v5.pb(i);
        }
    }
    sort(v3.begin(), v3.end(), greater<ll> ());
    sort(v4.begin(), v4.end(), greater<ll> ());
    ll ans=0;
    for (ll i = 0; i < v5.size(); i++)
    {
        ll c1=0,c2=0;
        for (ll j = 0; j < v3.size(); j++)
        {
            if(v3[j]>=v5[i])
                c1+=v3[j]-v5[i]+1;
            else
            {
                br;
            }
            
        }
        for (ll j = 0; j < v4.size(); j++)
        {
            if(v4[j]>=(k/v5[i]))
                c2+=v4[j]-(k/v5[i])+1;
            else 
            br;
        }
        ans+=c1*c2;
        
    }
    for (ll i = 0; i < v5.size(); i++)
    {
        if(v5[i]==sqrt(k))
            br;
        ll c1=0,c2=0;
        for (ll j = 0; j < v3.size(); j++)
        {
            if(v3[j]>=(k/v5[i]))
                c1+=v3[j]-(k/v5[i])+1;
            else
            {
                br;
            }
            
        }
        for (ll j = 0; j < v4.size(); j++)
        {
            if(v4[j]>=(v5[i]))
                c2+=v4[j]-(v5[i])+1;
            else 
                br;
        }
        ans+=c1*c2;
        
    }
    cout<<ans<<endl;
    
    return 0;
}