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

ll calc(ll l, ll r, char ch, string& s){
    if(l==r){
        return s[l]==ch?0:1;
    }
    ll mid=(l+r)/2;
    ll tp1=0, tp2=0;
    for (ll i = l; i <= mid; i++)
    {
        if(s[i]!=ch)
            tp1++;
    }
    for (ll i = mid+1; i <= r; i++)
    {
        if(s[i]!=ch)
            tp2++;
    }
    //cout<<tp1<<" "<<tp2<<endl;
    ch++;
    //cout<<ch<<endl;
    ll ans1=tp1+calc(mid+1,r,ch,s);
    ll ans2=tp2+calc(l,mid,ch,s);
    return min(ans1,ans2);
}

void solve()
{
    ll n;
    cin>>n;
    string s;
    cin>>s;
    cout<<calc(0,n-1,'a',s)<<endl;
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
    //t=1;
    cin>>t;
    while (t--)
    {
        solve();
    }
    
    return 0;
}