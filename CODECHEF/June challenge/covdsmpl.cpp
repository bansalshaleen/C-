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


void solve()
{
    ll n,p;
    cin>>n>>p;
    ve<ve<bool>> v(n, ve<bool> (n,0));
    ll k=0;
    for (ll i = 0; i < 60; i++)
    {
        for (ll j = 0; j < 60; j++)
        {
            cout<<1<<" "<<i+1<<" "<<j+1<<" "<<i+1<<" "<<j+1<<endl;
            cin>>k;
            if(k==1)
                v[i][j]=1;
        }
        
    }
    cout<<2<<endl;
    for (ll i = 0; i < 60; i++)
    {
        for (ll j = 0; j < 60; j++)
        {
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    return ;
    
}



int main()
{
    FAST;
    ll t;
    cin>>t;
    while (t--)
    {
        solve();
    }
    
    return 0;
}
