//not completed

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


int main()
{
    FAST;
    ll n1,n2,k1,k2;
    cin>>n1>>n2>>k1>>k2;
    ll dp[n1+n2+1]={0};
    dp[1]=2;
    for (ll i = 2; i < n1+n2+1; i++)
    {
        if(i>max(k1,k2))
        dp[i]=(dp[i-1]*2-dp[i-k1]-dp[i-k2])%A;
        else if(i>min(k1,k2))
        dp[i]=(dp[i-1]*2-dp[i-min(k1,k2)])%A;
        else 
        dp[i]=(dp[i-1]*2)%A;
    }
    cout<<dp[n1+n2]<<endl;

    return 0;
}