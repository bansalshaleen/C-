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
    ll ans=ceil(log2(n+1))-1;
    //cout<<ans<<endl;
    if(n<=3){
        cout<<1<<endl;
        if(n==2)
        cout<<0<<endl;
        else
        cout<<1<<endl;
        return;
    }
    ll sum=pow(2,ans-1)-1;
    ll lst=pow(2,ans-2);
    //cout<<sum<<endl;
    ll no1=min((n-sum)/2,2*lst) ;
    ll no2=n-sum-no1;
    ll fin1=no1-lst;
    ll fin2=no2-no1;
    ve<ll> ot;
    ll yu=1;
    for (ll i = 1; i <= ans-2; i++)
    {
        ot.pb(yu);
        yu*=2;
    }
    ot.pb(fin1);
    ot.pb(fin2);
    cout<<ot.size()<<endl;
    for (ll i = 0; i < ot.size(); i++)
    {
        cout<<ot[i]<<" ";
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
    ll t;
    cin>>t;
    while (t--)
    {
        solve();
    }
    
    return 0;
}