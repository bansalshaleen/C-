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
    ll n;
    cin>>n;
    ve<ll> v(2*n,0);
    for (ll i = 0; i < 2*n; i++)
    {
        cin>>v[i];
    }
    ve<ll> odd;
    ve<ll> even;
    for (ll i = 0; i < 2*n; i++)
    {
        if(v[i]%2==0)
            even.pb(i+1);
        else
        {
            odd.pb(i+1);
        }
        
    }
    bool flag=0;
    if(odd.size()%2!=0)
    {
        odd.erase(odd.begin()+odd.size()-1);
        even.erase(even.begin()+even.size()-1);
        flag=1;
    }
    else if(odd.size()!=0)
    {
        odd.erase(odd.begin()+odd.size()-1);
        odd.erase(odd.begin()+odd.size()-1);
    }
    else
    {
        even.erase(even.begin()+even.size()-1);
        even.erase(even.begin()+even.size()-1);
    }
    
    
    ll cnt=0;
    bool fg=0;
    //ll it=0;

    for (ll i = 0; i < odd.size()/2; i++)
    {
        /* code */
        cout<<odd[i]<<" "<<odd[odd.size()-1-i];
        cout<<endl;
    }
    for (ll i = 0; i < even.size()/2; i++)
    {
        /* code */
        cout<<even[i]<<" "<<even[even.size()-1-i];
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