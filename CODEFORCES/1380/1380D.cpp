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
    ll n,m;
    cin>>n>>m;
    ll x,k,y;
    cin>>x>>k>>y;
    ve<ll> v(n,0),v1(m+1,0), fn, mn, mx;
    for (ll i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    for (ll i = 0; i < m; i++)
    {
        cin>>v1[i];
    }
    v1[m]=-1;
    bool fg=0;
    ll index=0;
    ll sm=0, mmn=INT_MAX, mmx=0;
    for (ll i = 0; i < n; i++)
    {
        if(v[i]==v1[index]){
            if(sm!=0){
            fn.pb(sm);
            mn.pb(mmn);
            mx.pb(mmx);
            }
            index++;
            sm=0;
            mmn=INT_MAX;
            mmx=0;
        }
        else{
            sm++;
            mmn=min(mmn,v[i]);
            mmx=max(mmx,v[i]);
        }
    }
    if(sm!=0)
    fn.pb(sm);
    if(index!=m){
        cout<<-1<<endl;
        return;
    }
    for (ll i = 0; i < fn.size(); i++)
    {
        if(fn[i]%k==0){
            if(mn[i]);
        }
        if(fn[i]>=k){
            if(y*k>x){

            }
            else{

            }
        }
        if(fn[i]!=0){

        }
    }
    
    
    
    
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