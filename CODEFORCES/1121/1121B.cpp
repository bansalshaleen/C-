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

multiset<ll> m;
set<ll> s;
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
    sort(v.begin(), v.end());
    /*for (ll i = 0; i < n-1; i++)
    {
        for (ll j = ; j>=0; j--)
        {
            
        }
        
        
    }*/

    for (ll i = 0; i < n; i++)
    {
        for (ll j = i+1; j < n; j++)
        {
            m.insert(v[i]+v[j]);
            s.insert(v[i]+v[j]);
            
        }
        
    }
    ll ans=0;
    for (auto it = s.begin(); it !=s.end(); it++)
    {
        //cout<<*it<<" "<<ans<<endl;
        //cout<<m.count(*it)<<endl;
        ans=max(ans,(ll)(m.count(*it)));
    }
    cout<<ans<<endl;
    
    

    return 0;
}
    