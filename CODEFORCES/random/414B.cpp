#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
 
using namespace __gnu_pbds;
using namespace std;
 
typedef   long long int ll;
typedef unsigned long long int sll;
typedef long double ld;
#define A 1000000007ll
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


ll power(ll x, ll y, ll p) 
{ 
    ll res = 1;      // Initialize result 
  
    x = x % p;  // Update x if it is more than or 
                // equal to p 
  
    while (y > 0) 
    { 
        // If y is odd, multiply x with result 
        if (y & 1) 
            res = (res*x) % p; 
  
        // y must be even now 
        y = y>>1; // y = y/2 
        x = (x*x) % p; 
    } 
    return res; 
} 
  
// Returns n^(-1) mod p 
ll modInverse(ll n, ll p) 
{ 
    return power(n, p-2, p); 
} 
  
// Returns nCr % p using Fermat's little 
// theorem. 
ll nCrModPFermat(ll n, ll r, ll p) 
{ 
   // Base case 
   if (r==0) 
      return 1; 
  
    // Fill factorial array so that we 
    // can find all factorial of r, n 
    // and n-r 
    ll fac[n+1]; 
    fac[0] = 1; 
    for (ll i=1 ; i<=n; i++) 
        fac[i] = fac[i-1]*i%p; 
  
    return (fac[n]* modInverse(fac[r], p) % p * 
            modInverse(fac[n-r], p) % p) % p; 
} 



int main()
{
    FAST;
    ll n,k;
    cin>>n>>k;
    ve<ve<ll>> dp(k+1,ve<ll> (n+1,0));
    ve<ll> v[n+1];
    for (ll i = 1; i < n+1; i++)
    {
        /* code */
        ll num=i;
        while(num<n+1)
        {
            v[i].pb(num);
            num+=i;
        }
    }
    
    for (ll i = 1; i < n+1; i++)
    {
        dp[1][i]=1;
    }
    for (ll i = 2; i < k+1; i++)
    {
        for (ll j = 1; j < n+1; j++)
        {
            /* code */
            for (ll k = 0; k < v[j].size(); k++)
            {
                /* code */
                dp[i][j]+=dp[i-1][v[j][k]];
                dp[i][j]%=A;
            }
            
            //dp[i][j]=
        }
        
    }
    ll ans=0;
    for (ll i = 1; i < n+1; i++)
    {
        ans+=dp[k][i];
        ans%=A;
    }
    
    cout<<ans<<endl;

    return 0;
}