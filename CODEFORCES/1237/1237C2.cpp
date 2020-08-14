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
    map<ll,map<ll,map<ll,ll> > > m;
    ll x,y,z;
    for (ll i = 0; i < n; i++)
    {
        cin>>x>>y>>z;
        m[x][y][z]=i+1;
        //cout<<i<<endl;
    }
    for (ll i = 0; i < n/2; i++)
    {
        //cout<<i<<endl;
        x=m.begin()->first;
        y=m[x].begin()->first;
        z=m[x][y].begin()->first;
        //cout<<x<<y<<z<<endl;
        ll index=m[x][y][z];
        m[x][y].erase(z);
        if(m[x][y].size()==0){
            m[x].erase(y);
            if(m[x].size()==0){
                m.erase(x);
            }
        }

        ll x1,y1,z1;
        x1=m.begin()->first;
        if(m[x1].lb(y)==m[x1].end()){
            y1=m[x1].rbegin()->first;
        }
        else
        {
            y1=m[x1].lb(y)->first;
        }
        if(m[x1][y1].lb(z)==m[x1][y1].end()){
            z1=m[x1][y1].rbegin()->first;
        }
        else
        {
            z1=m[x1][y1].lb(z)->first;
        }
        ll index1=m[x1][y1][z1];
        m[x1][y1].erase(z1);
        if(m[x1][y1].size()==0){
            m[x1].erase(y1);
            if(m[x1].size()==0){
                m.erase(x1);
            }
        }
        cout<<index<<" "<<index1<<endl;

        
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