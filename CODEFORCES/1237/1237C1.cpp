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
    ve<ve<ll> > v(n,ve<ll> (3,0));
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < 3; j++)
        {
            cin>>v[i][j];
        }
        
    }
    bool visited[n];
    for (ll i = 0; i < n; i++)
    {
        visited[i]=0;
    }
    for (ll i = 0; i < n; i++)
    {
        ll pt=-1;
        ll x=1000000000,y=1000000000,z=1000000000;
        if(visited[i]){
            cc;
        }
        visited[i]=1;
        for (ll j = 0; j < n; j++)
        {
            if(visited[j]){
                cc;
            }
            if(x==1000000000){
                x=v[j][0]; y=v[j][1]; z=v[j][2];
                //cout<<j<<endl;
            }
            if((v[j][0]<=max(x,v[i][0]))&&(v[j][0]>=min(x,v[i][0]))){
                if((v[j][1]<=max(y,v[i][1]))&&(v[j][1]>=min(y,v[i][1]))){
                    if((v[j][2]<=max(z,v[i][2]))&&(v[j][2]>=min(z,v[i][2]))){
                        x=v[j][0]; y=v[j][1]; z=v[j][2];
                        pt=j;
                    }

                }
            }

        }
        if(pt!=-1){
        visited[pt]=1;
        cout<<i+1<<" "<<pt+1<<endl;}
        
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