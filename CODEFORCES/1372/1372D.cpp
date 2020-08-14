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

ll dp[100001][2][3];
void solve()
{
    ll n;
    cin>>n;
    ve<ll> v(n,0);
    //ll sum=0;
    for (ll i = 0; i < n; i++)
    {
        cin>>v[i];
        //sum+=v[i];
    }
    if(n==1){
        cout<<v[0]<<endl;
        return;
    }
    ll ans=0;
    ll sm1=0, sm2=0;
    sm1=v[0]+v[1];
    sm2=v[2]+v[1];
    for (ll i = 3; i < n; i+=2)
    {
        sm1+=v[i];
    }
    for (ll i = 4; i < n; i+=2)
    {
        sm2+=v[i];
    }
    ans=max(sm1,sm2);
    //cout<<sm1<<" "<<sm2<<endl;
    for (ll i = 2; i < n; i+=2)
    {
        sm1+=v[i];
        sm1-=v[i-1];
        ans=max(ans,sm1);
        //cout<<ans<<endl;
    }
    for (ll i = 3; i < n; i+=2)
    {
        sm2+=v[i];
        sm2-=v[i-1];
        ans=max(ans,sm2);
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