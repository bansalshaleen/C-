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


int main()
{
    FAST;
    ll t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        ll n=s.length();
        ve<ll> v0(n+1,0);
        ve<ll> v1(n+1,0);
        for (ll i = 1; i < n+1; i++)
        {
            if(s[i-1]=='0')
            {
                v0[i]=v0[i-1]+1;
                v1[i]=v1[i-1];
            }
            else
            {
                v1[i]=v1[i-1]+1;
                v0[i]=v0[i-1];
            }
            
        }
        ll min1=n;
        for (ll i = 1; i < n+1; i++)
        {
            /* code */
            if(min1>(v1[i]+v0[n]-v0[i]))
            {
                min1=v1[i]+v0[n]-v0[i];
            }
            if(min1>(v0[i]+v1[n]-v1[i]))
            {
                min1=v0[i]+v1[n]-v1[i];
            }
        }
        cout<<min1<<endl;
        

    }
    return 0;
}