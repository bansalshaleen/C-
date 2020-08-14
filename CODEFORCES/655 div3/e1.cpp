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
    ll n,k;
    cin>>n>>k;
    ll x,y,z;
    priority_queue <ll, vector<ll>, greater<ll>> v1,v2,v3; 
    for (ll i = 0; i < n; i++)
    {
        cin>>x>>y>>z;
        if(y==1&&z==1){
            v3.push(x);
        }
        else if(y==1){
            v1.push(x);
        }
        else if(z==1){
            v2.push(x);
        }
    }
    if((v1.size()+v3.size())<k){
        cout<<-1<<endl;
        return;
    }
    if((v2.size()+v3.size())<k){
        cout<<-1<<endl;
        return;
    }
    ll a=0,b=0;
    ll ans=0;
    bool fg=0;
    while(a<k||b<k){
        if(v3.size()==0){
            fg=1;
            br;
        }
        if(v1.size()!=0&&v2.size()!=0){
            if((v1.top()+v2.top())<=v3.top()){
                ans+=(v1.top()+v2.top());
                v1.pop();
                v2.pop();
                
            }
            else
            {
                ans+=v3.top();
                v3.pop();
            }
            a++;
            b++;
        }
        else
        {
            ans+=v3.top();
            v3.pop();
            a++; b++;
        }
        
    }
    if(fg){
        while(a<k){
            ans+=v1.top();
            v1.pop();
            a++;
        }
        while(b<k){
            ans+=v2.top();
            v2.pop();
            b++;
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