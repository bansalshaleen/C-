#include <bits/stdc++.h>
 
using namespace std;
 
typedef   long long int ll;
typedef unsigned long long int sll;
typedef long double ld;
#define A 1000000007ll
#define B 998244353ll
#define N 2000001ll
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

ve<ll>dp(N,0);
ve<bool> dot(N,0);
int main()
{
    FAST;
    #ifndef ONLINE_JUDGE
    freopen("../../input.txt", "r", stdin);
    freopen("../../output.txt", "w", stdout);
    #endif
    dp[3]=1;
    dot[3]=1;
    for (ll i = 4; i <= N; i++)
    {
        dp[i]=((2*dp[i-2])%A+dp[i-1]%A)%A;
        if(dot[i-1]==0&&dot[i-2]==0){
            dot[i]=1;
            dp[i]+=1;
        }
    }
    ll t;
    cin>>t;
    while (t--)
    {
        ll n;
        cin>>n;
        ll ans=(4*dp[n])%A;
        cout<<ans<<endl;
    }
    
    return 0;
}