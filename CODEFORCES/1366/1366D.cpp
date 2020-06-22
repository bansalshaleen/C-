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

ve<ll> pr;
/*
int bsearch()
{

}*/
void SieveOfEratosthenes(ll n) 
{ 
    //cout<<"sdf"<<endl;
    bool pme[n+1]; 
    //cout<<"sdf"<<endl;
    memset(pme, true, sizeof(pme)); 
    //cout<<"hfs"<<endl;
    for (ll p=2; (p*p)<=n; p++) 
    { 
        if (pme[p] == true) 
        { 
            for (ll i=p*p; i<=n; i += p) 
                pme[i] = false; 
        } 
    } 
    
    // Print all prime numbers 
    for (ll p=2; p<=n; p++) {
       if (pme[p]){ 
          pr.pb(p);
          //cout<<p<<" ";
       }
    }
    //cout<<endl;
} 
void solve()
{
    ll n;
    cin>>n;
    ve<ll> v(n,0);
    for (ll i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    //cout<<"hfs"<<endl;
    SieveOfEratosthenes(10000);
    //cout<<pr.size()<<endl;
    //cout<<"hfs"<<endl;
    ve<ll> v1;
    ve<ll> v2;
    for (ll i = 0; i < n; i++)
    {
        ve<ll> s;
        for (ll j = 0; j < pr.size(); j++)
        {
            if((v[i]%pr[j])==0)
            {
                s.pb(pr[j]);
            }
            
        }
        if(s.size()<2)
        {
            v1.pb(-1);
            v2.pb(-1);
        }
        else
        {
            v1.pb(s.front());
            ll x=1;
            for (ll i = 1; i < s.size(); i++)
            {
                x*=s[i];
            }
            v2.pb(x);
            
        }
        
        
    }
    for (ll i = 0; i < n; i++)
    {
        cout<<v1[i]<<" ";
    }
    cout<<endl;
    for (ll i = 0; i < n; i++)
    {
        cout<<v2[i]<<" ";
    }
    cout<<endl;
    
    
}


int main()
{
    FAST;
    ll t=1;
    //cin>>t;
    while (t--)
    {
        solve();
    }
    
    return 0;
}
