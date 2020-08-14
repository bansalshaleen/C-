#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <numeric>
#include <iomanip>
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

template <typename Number>
Number gcd(Number u, Number v) {
    while (v != 0) {
        Number r = u % v;
        u = v;
        v = r;
    }
    return u;
}

ll binSearch(ve<ll> v, ll l, ll r,ll x) 
{ 
    if (r >= l) { 
        ll mid = l + (r - l) / 2; 
        if (v[mid] == x) 
            return mid; 
        if (v[mid] > x) 
            return binSearch(v, l, mid - 1, x); 
        return binSearch(v, mid + 1, r, x); 
    } 
    return -1; 
} 

void solve()
{
    ll n,p;
    cin>>n>>p;
    ve<ll> arr(4001,0);
    ve<ll> v(n,0);
    ll mn=4000, mx=0;
    for (ll i = 0; i < n; i++)
    {
        cin>>v[i];
        mn=min(mn,v[i]);
        mx=max(mx,v[i]);
    }
    for (ll i = 0; i < n; i++)
    {
        for (ll j = v[i]; j < 4001; j++)
        {
            /* code */
            arr[j]++;
        }
        
    }
    ve<ll> final;
    ll ans=0;
    bool fg=0;
    
    for (ll i = mn; i <=mx; i++)
    {
        fg=1;
        for (ll j = 0; j < n; j++)
        {
            if((arr[i+j]-j)==0){
                fg=0;
                br;
            }
            if((arr[i+j]-j)%p==0){
                fg=0;
                br;
            }
        }
        if(fg){
            final.pb(i);
        }
    }
    cout<<final.size()<<endl;
    for (ll i = 0; i < final.size(); i++)
    {
        cout<<final[i]<<" ";
    }
    cout<<endl;
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