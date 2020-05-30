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
    ll n,m,o;
    cin>>n>>m;
    ve<ve<ll>> v(n+1);
    v[0]=ve<ll> (pow(2,n),0);
    for (ll i = 0; i < pow(2,n); i++)
    {
        cin>>v[0][i];
    }
    ll i=1;
    while(i<n+1)
    {
        v[i]=ve<ll> (pow(2,n-i),0);
        for (ll j = 0; j < pow(2,n-i); j++)
        {
            /* code */
            if(i%2==1)
            v[i][j]=v[i-1][j*2]|v[i-1][j*2+1];
            else
            {
                v[i][j]=v[i-1][j*2]^v[i-1][j*2+1];
            }
            
        }
        i++;
        
    }
    
    ll a,b;
    for (ll k = 0; k < m; k++)
    {
        cin>>a>>b;
        v[0][a-1]=b;
        i=1;
        ll index=(a-1);
        while(i<n+1)
        {
            if(i%2==1)
            {
                if(index%2==1)
                v[i][index/2]=v[i-1][index]|v[i-1][index-1];
                else
                v[i][index/2]=v[i-1][index]|v[i-1][index+1];
                
            }
            else
            {
                if(index%2==1)
                v[i][index/2]=v[i-1][index]^v[i-1][index-1];
                else
                v[i][index/2]=v[i-1][index]^v[i-1][index+1];
            }
            i++;
            index/=2;
        }
        cout<<v[n][0]<<endl;
    }
    //cout<<v[]
    
}