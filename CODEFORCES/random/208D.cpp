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
    ll n;
    cin>>n;
    ve<ll> v(n,0);
    for (ll i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    ve<ll> p(5,0);
    for (ll i = 0; i < 5; i++)
    {
        cin>>p[i];
    }
    ll points=0;
    ve<ll> c(5,0);
    for (ll i = 0; i < n; i++)
    {
        points+=v[i];
        for (ll j = 0; j < 5; j++)
        {
            //cout<<j<<endl;
            if((p[j]>points)&&(j==0))
                br;
            if(p[j]>points)
            {
                c[j-1]+=(points/p[j-1]);
                points%=p[j-1];
                j=-1;
            }
            if(j==4)
            {
                c[4]+=(points/p[4]);
                points%=p[4];
                j=-1;
            }
        }
        
    }
    for (ll i = 0; i < 5; i++)
    {
        cout<<c[i]<<" ";
    }
    cout<<endl<<points<<endl;
    
    
    
    return 0;
}