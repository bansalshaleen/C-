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



ll power(ll x, unsigned int y, ll p)  
{  
    ll res = 1;     // Initialize result  
  
    x = x % p; // Update x if it is more than or  
                // equal to p 
   
    if (x == 0) return 0; // In case x is divisible by p; 
  
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
// Driver program 


ll exponentMod(ll a, ll b, ll c)  
{  
    // Base cases  
    if (a == 0)  
        return 0;  
    if (b == 0)  
        return 1;  
  
    // If B is even  
    long y;  
    if (b % 2 == 0) {  
        y = exponentMod(a, b / 2, c);  
        y = (y * y) % c;  
    }  
  
    // If B is odd  
    else {  
        y = a % c;  
        y = (y * exponentMod(a, b - 1, c) % c) % c;  
    }  
  
    return (ll)((y + c) % c);  
}  

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
    ll n,m;
    cin>>n>>m;
    if(n==2)
        cout<<0<<endl;
    else{
    //cout<<"ajdfk"<<endl;
    //cout << "Value of nCr % p is " << nCrModpLucas(n, r, p);
    ll ans=nCrModPFermat(m, n-1, B);
    //cout<<"afkadf"<<endl;
    ans=(ans*(n-2))%B;
    //ans=(ans*(n-1))%B;
    ll pu=exponentMod(2,n-3,B);
    //cout<<"afih"<<endl;
    ans=(ans*pu)%B;
    
    cout<<ans<<endl;}
    return 0; 
} 