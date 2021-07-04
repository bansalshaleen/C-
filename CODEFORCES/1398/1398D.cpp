#include <bits/stdc++.h>
#include <numeric>
#include <iomanip>
using namespace std;
 
typedef   long long int ll;
typedef unsigned long long int sll;
typedef long double ld;
#define AA 100000000ll
#define BB 998244353ll
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
Number gcd(Number m, Number n) {
    if(m < n)
        swap(m, n);
    if(n == 0)
        return m;
    return gcd(m % n, n);
}

template <typename Number>
Number binSearch(ve<Number> v, Number l, Number r, Number x) 
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

ll power(ll a, ll b){
    ll result=1;
    while(b>0){
        if(b%2==1) result*=a;
        a*=a;
        b/=2;
    }
    return result;
}

void solve()
{
    ll r,g,b,o;
    cin>>r>>g>>b;
    ve<ll> R(r,0);
    ve<ll> G(g,0);
    ve<ll> B(b,0);
    //priority_queue<ll> R;
    //priority_queue<ll> G;
    //priority_queue<ll> B;
    
    for (ll i=0;i< r;i++)
    {   
        cin>>R[i];
    }
    for (ll i = 0; i < g; i++)
    {
        cin>>G[i];
    }
    for (ll i = 0; i < b; i++)
    {
        cin>>B[i];
    }
    sort(R.begin(), R.end());
    sort(G.begin(), G.end());
    sort(B.begin(), B.end());
    ve<ve<ve<ll>>> dp(r+1, ve<ve<ll>>(g+1, ve<ll>(b+1,0)));

    for (ll i = 0; i < r+1; i++)
    {
        for (ll j = 0; j < g+1; j++)
        {
            for (ll k = 0; k < b+1; k++)
            {
                if((i==0&&j==0)||(k==0&&j==0)||(i==0&&k==0)){
                    dp[i][j][k]=0;
                }
                else if(i==0){
                    dp[i][j][k]=dp[i][j-1][k-1]+G[j-1]*B[k-1];
                }
                else if(j==0){
                    dp[i][j][k]=dp[i-1][j][k-1]+R[i-1]*B[k-1];
                }
                else if(k==0){
                    dp[i][j][k]=dp[i-1][j-1][k]+G[j-1]*R[i-1];
                }
                else{
                    dp[i][j][k]=max(dp[i][j][k], dp[i][j-1][k-1]+G[j-1]*B[k-1]);
                    dp[i][j][k]=max(dp[i][j][k], dp[i-1][j][k-1]+R[i-1]*B[k-1]);
                    dp[i][j][k]=max(dp[i][j][k], dp[i-1][j-1][k]+G[j-1]*R[i-1]);
                    
                }
            }
            
        }
        
    }
    cout<<dp[r][g][b]<<endl;

    //return dp[r][g][b];
    
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
    //cin>>t;
    while (t--)
    {
        solve();
    }
    
    return 0;
}