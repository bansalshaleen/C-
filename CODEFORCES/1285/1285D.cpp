#include <bits/stdc++.h>
 
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
    ll n;
    cin>>n;
    ve<ll> v(n,0);
    for (ll i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    ll omx=0;
    for (ll i = 0; i < n; i++)
    {
        if(omx<v[i]){
            omx=v[i];
        }
    }
    
    //ll ans=0;
    for (ll i = 30; i >=0 ; i--)
    {
        ll mx=-1;
        ll curr=pow(2,i);
        bool fg=0;
        for (ll j = 0; j < n; j++)
        {
            if((curr^v[j])>omx){
                fg=1;
                br;
            }
        }
        if(!fg){
            omx=-1;
        for (ll j = 0; j < n; j++)
        {
            v[j]=v[j]^curr;
            omx=max(omx,v[j]);
        }}
        
    }
    cout<<omx<<endl;
    return;
    
}

int main()
{
    FAST;
    #ifndef ONLINE_JUDGE
    freopen("../../input.txt", "r", stdin);
    freopen("../../output.txt", "w", stdout);
    #endif
    ll t=1;
    //cin>>t;
    while (t--)
    {
        solve();
    }
    
    return 0;
}