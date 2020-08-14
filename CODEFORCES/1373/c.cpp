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
    string s;
    cin>>s;
    ll n=s.length();
    ve<ll> dp(n+1,0);
    for (ll i = 1; i <= n; i++)
    {
        if(s[i-1]=='+'){
            dp[i]=dp[i-1]+1;
        }
        else
        {
            dp[i]=dp[i-1]-1;
        }
        
    }
    ll cnt=-1;
    ll ans=0;
    for (ll i = 1; i < n+1; i++)
    {
        if(dp[i]==cnt){
            ans+=i;
            cnt--;
            //cout<<i<<" ads"<<endl;
        }
    }
    ans+=n;
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
    ll t;
    cin>>t;
    while (t--)
    {
        solve();
    }
    
    return 0;
}