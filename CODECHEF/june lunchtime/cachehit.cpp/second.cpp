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
    ll m,n;
    cin>>m>>n;
    //ll ans=0;
    set<ll> s;
    //ve<ll> v;
    ll cnt=0;
    ll o;
    for (ll i = 0; i < n; i++)
    {
        cin>>o;
        if(o<m)
        s.insert(o);
        if(o==m)
        {
            cnt++;
        }
    }
    //sort(v.begin(), v.end());
    //bool fg=0;
    if(s.size()==(m-1))
    {
        cout<<(n-cnt)<<endl;
        return;
    }
    cout<<-1<<endl;
    return;
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