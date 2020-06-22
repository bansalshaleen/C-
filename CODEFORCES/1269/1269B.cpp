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

    ll n,m;
    cin>>n>>m;
    ve<ll> v1(n,0);
    ve<ll> v2(n,0);
    //multiset<ll> mp;
    for (ll i = 0; i < n; i++)
    {
        cin>>v1[i];
    }
    for (ll i = 0; i < n; i++)
    {
        cin>>v2[i];
        //mp.insert(v2[i]);
    }
    sort(v2.begin(), v2.end());
    sort(v1.begin(), v1.end());
    //bool arr[n]={false};
    ll diff=0;
    ll ans=1e18;
    for (ll i = 0; i < n; i++)
    {
        //bool arr[n]={false};    
        diff=((v2[i]-v1[0]+m)%m);
        //arr[i]=true;
        bool fg=0;
        for (ll j = 0; j < n; j++)
        {
            if((v1[j]+diff)%m!=v2[(j+i)%n]){
                fg=1;
                br;
            }
        }
        if(!fg)
            ans=min(ans,diff);
    
    }
    cout<<ans<<endl;
    return 0;
}
    
