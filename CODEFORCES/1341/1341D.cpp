#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
 
using namespace __gnu_pbds;
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

void solve()
{
    ll n,k;
    cin>>n>>k;
    ve<string> v(n);
    for (ll i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    ve<string> arr;
    arr.pb("1110111");
    arr.pb("0010010");
    arr.pb("1011101");
    arr.pb("1011011");
    arr.pb("0111010");
    arr.pb("1101011");
    arr.pb("1101111");
    arr.pb("1010010");
    arr.pb("1111111");
    arr.pb("1111011");
    //arr.pb("1110111");

    bool dp[n][k+1];
    
    
}


int main()
{
    FAST;
    ll t=1;
    //cin>>t;
    while (t--)
    {
        solve();
    }
    
    return 0;
}
