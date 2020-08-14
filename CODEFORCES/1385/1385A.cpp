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
    ve<ll> v;
    ll a,b,c,x,y,z;
    for (ll i = 0; i < 3; i++)
    {
        ll o;
        cin>>o;
        v.pb(o);
    }
    a=v[0];
    b=v[1];
    c=v[2];
    sort(v.begin(), v.end());
    //ll nm=0;
    if(v[0]!=v[1]&&v[1]!=v[2]){
        cout<<"NO"<<endl;
    }
    else if(v[0]==v[1]&&v[1]==v[2]){
        cout<<"YES"<<endl;
        cout<<v[0]<<" "<<v[0]<<" "<<v[0]<<endl;
    }
    else if(v[0]==v[1]){
        cout<<"NO"<<endl;
    }
    else {
        cout<<"YES"<<endl;
        if(a==b){
            x=a;
            y=c;
            z=c;
        }
        else if(b==c){
            z=b;
            x=a;
            y=a;

        }
        else{
            y=a;
            x=b;
            z=b;
        }
        cout<<x<<" "<<y<<" "<<z<<endl;
    }
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