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
    string s;
    cin>>s;
    ll n=s.length();
    ll cnt1=0, cnt2=0, cnt3=0;
    for (ll i = 0; i < n; i++)
    {
        if(s[i]=='S'){
            cnt1++;
        }
        else if(s[i]=='P'){
            cnt2++;
        }
        else{
            cnt3++;
        }
    }
    string ans="";
    if(cnt1>=max(cnt2, cnt3)){
        for (ll i = 0; i < n; i++)
        {
            ans+='R';
        }
        
    }
    else if(cnt2>=max(cnt1, cnt3)){
        for (ll i = 0; i < n; i++)
        {
            ans+='S';
        }
    }
    else{
        for (ll i = 0; i < n; i++)
        {
            ans+='P';
        }
    }
    cout<<ans<<endl;
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