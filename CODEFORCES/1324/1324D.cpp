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
    ll n;
    cin>>n;
    ve<ll> a(n,0),b(n,0),c(n,0);
    for (ll i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    for (ll i = 0; i < n; i++)
    {
        cin>>b[i];
    }
    for (ll i = 0; i < n; i++)
    {
        c[i]=a[i]-b[i];
    }
    sort(c.begin(), c.end());
    ll j=n-1;
    ll ans=0;
    for (ll i = 0; i < n-1; i++)
    {
        if(j>=n){
            j=n-1;
        }
        while(c[i]+c[j]>0){
            if(j==i){
                br;
            }
            j--;
        }
        ans+=(n-j-1);
        //cout<<ans<<" "<<j<<endl;
        //cout<<j<<endl;
        if(j==i){
            j++;
        }

    }
    cout<<ans<<endl;
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