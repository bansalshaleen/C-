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
    ll l,r,m;
    cin>>l>>r>>m;
    ll diff=r-l;
    ll m1, m2;
    m1=m-diff;
    m2=m+diff;
    ll a,b,c;
    if(l>=m1&&l<=m2){
        a=l;
        ll yyy=m-l;
        if(yyy>0){
            b=r;
            c=r-yyy;
        }
        else
        {
            b=l;
            c=l-yyy;
        }
        cout<<a<<" "<<b<<" "<<c<<endl;
        return;
    }
    else if(m1%l==0){
        a=l;
        //ll qyq=m1/l;
        b=r;
        c=l;
        cout<<a<<" "<<b<<" "<<c<<endl;
        return;
    }
    else{
        ll qt1=(m2/l);
        //qt1=max(qt1,(ll)1);
        ll rem1=m2%qt1;
        ll nm=m2-rem1;
        nm=nm/qt1;
        a=nm;
        ll dff=(m-(a*qt1));
        if(dff>0){
            b=r;
            c=r-dff;
        }
        else{
            b=l;
            c=l-dff;
        }
        cout<<a<<" "<<b<<" "<<c<<endl;
    }
}

int main()
{
    FAST;
    #ifndef ONLINE_JUDGE
    freopen("../../input.txt", "r", stdin);
    freopen("../../output.txt", "w", stdout);
    #endif
    ll t;
    t=1;
    cin>>t;
    while (t--)
    {
        solve();
    }
    
    return 0;
}