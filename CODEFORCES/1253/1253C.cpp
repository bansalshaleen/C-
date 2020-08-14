#include <bits/stdc++.h>
 
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
    ll n,m;
    cin>>n>>m;
    ve<ll> v(n,0);
    for (ll i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    sort(v.begin(), v.end());
    ve<ll> sum(n+1,0);
    ve<ll> dp(n+1,0);
    for (ll i = 1; i < n+1; i++)
    {
        sum[i]=sum[i-1]+v[i-1];
    }
    for (ll i = 0; i < n+1; i++)
    {
        if(i-m>=0)
        dp[i]=dp[i-m]+sum[i];
        else
        {
            dp[i]=sum[i];
        }
        
    }
    for (ll i = 0; i < n; i++)
    {
        cout<<dp[i+1]<<" ";
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
    ll t=1;
    //cin>>t;
    while (t--)
    {
        solve();
    }
    
    return 0;
}