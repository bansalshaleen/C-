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

void solve()
{
    ll n;
    cin>>n;
    ve<ll> a(n,0);
    ve<ll> b(n,0);
    for (ll i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    for (ll i = 0; i < n; i++)
    {
        cin>>b[i];
    }
    set<ll> s;
    s.clear();
    ll ans=0;
    for (ll i = n-1; i >=0; i--)
    {
        while(s.find(b[i+s.size()])!=s.end()){
            s.erase(b[i+s.size()]);
            //cout<<i<<" "<<s.size()<<endl;
            //br;
        }
        if(a[i]!=b[i+s.size()]){
            s.insert(a[i]);
            //cout<<a[i]<<endl;
            ans++;
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