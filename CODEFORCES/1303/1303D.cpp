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
    ve<ll> v(m,0);
    ve<ll> pre(m+1,0);
    for (ll i = 0; i < m; i++)
    {
        cin>>v[i];
        pre[i+1]=pre[i]+v[i];
    }
    ll ans=0;
    set<ll> s;
    ll ind=-1;
    for (ll i = 1; i < m+1; i++)
    {
        if(pre[i]==n){
            cout<<0<<endl;
            return;
        }
        else if(pre[i]>n){
            ind=i;
        }
    }
    if(ind==-1){
        cout<<-1<<endl;
        return;
    }
    ll tpp=0;
    for (ll i = ind; i > 0; i--)
    {
        if(tpp+v[i-1]==n){
            cout<<0<<endl;
            return;
        }
        else if(tpp+v[i-1]<n){
            tpp+=v[i-1];

        }
        else{
            s.insert(v[i-1]);
        }
    }
    ll nm=*s.begin();
    ll target=n-tpp;
    while(nm!=target){
        ans++;
        nm/=2;
        if(nm==1)
        br;
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
    ll t;
    cin>>t;
    while (t--)
    {
        solve();
    }
    
    return 0;
}