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
    ve<ll> a(n,0),b(n,0);
    for (ll i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    for (ll i = 0; i < n; i++)
    {
        cin>>b[i];
    }
    for (ll i = 0; i < n-1; i++)
    {
        if(b[i]>=(a[i]+a[i+1])){
            b[i]=0;
            a[i]=0;
            a[i+1]=0;
        }
    }
    if(b[n-1]>=(a[n-1]+a[0])){
        b[n-1]=0;
        a[0]=0;
        a[n-1]=0;
    }
    for (ll i = 0; i < n-1; i++)
    {
        if(b[i]>=a[i]){
            b[i]-=a[i];
            a[i]=0;
            a[i+1]=max((ll)0,a[i+1]-b[i]);
            b[i]=0;
        }
        else
        {
            a[i]-=b[i];
            b[i]=0;
        }
        
    }
    if(b[n-1]>=a[n-1]){
        b[n-1]-=a[n-1];
        a[n-1]=0;
        a[0]=max((ll)0, a[0]-b[n-1]);
        b[n-1]=0;
    }
    bool ans=0;
    for (ll i = 0; i < n; i++)
    {
        //cout<<a[i]<<" ";
        if(a[i]>0){
            ans=1;
            br;
        }
    }
    if(ans){
        cout<<"NO"<<endl;
        return;
    }
    cout<<"YES"<<endl;
    return;
    
}

int main()
{
    FAST;
    #ifndef ONLINE_JUDGE
    freopen("../../input.txt", "r", stdin);
    freopen("../../output.txt", "w", stdout);
    #endif
    ll t;
    cin>>t;
    while (t--)
    {
        solve();
    }
    
    return 0;
}