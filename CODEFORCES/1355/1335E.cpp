#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
 
using namespace __gnu_pbds;
using namespace std;
 
typedef long long int ll;
typedef unsigned long long int sll;
typedef  double ld;
#define A 1000000007ll
#define D 1000000000ll
#define B 998244353ll
#define C 1000000000000000000ll
#define FAST ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define oset tree<pair<ll,ll>, null_type,less<pair<ll,ll>>, rb_tree_tag,tree_order_statistics_node_update> 
#define pb push_back
#define puf push_front
#define pob pop_back
#define pof pop_front
#define mxe(v) *max_element(v.begin(),v.end())
#define mne(v) *min_element(v.begin(),v.end())
#define bs binary_search
#define lb lower_bound
#define ub upper_bound
#define ve vector
#define br break
#define PI 3.14159265358979323

int main()
{
    FAST;
    ll n,a,r,m;
    cin>>n>>a>>r>>m;
    ve<ll> v(n,0);
    for (ll i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    ll mn=0, mx=0;
    for (ll i = 0; i < n; i++)
    {
        mx+=v[n-1]-v[i];
        mn+=v[i]-v[0];
    }
    ll ans=0;
    if(m>a+r)
    {
        if(a*mx>r*mn)
        {
            ans=r*mn;
        }
        else
        {
            ans=a*mx;
        }
        
    }
    else if(2*min(a,r)<m)
    {
        
    }
    else 
    {
        
    }
    
}