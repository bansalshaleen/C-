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
    ll n,x;
    cin>>n>>x;
    ve<ll> v(n,0);
    ll sum=0;
    for (ll i = 0; i < n; i++)
    {
        cin>>v[i];
        sum+=v[i];
    }
    ll fst=-1,lst=n;
    for (ll i = 0; i < n; i++)
    {
        if((v[i]%x)!=0)
        {
            fst=i;
            br;
        }
    }
    for (ll i = n-1; i >= 0; i--)
    {
        /* code */
        if((v[i]%x)!=0)
        {
            lst=i;
            br;
        }
    }
    //cout<<fst<<" "<<lst<<endl;
    if(fst==-1)
    {
        cout<<-1<<endl;
        return ;
    }
    if((sum%x)!=0)
    {
        cout<<n<<endl;
        return;
    }
    else{
    
    ll ans=(n-1-fst);
    //cout<<ans<<endl;
    ans=max(ans,(fst+1));
    //cout<<ans<<endl;
    ans=max(ans,(n-1-lst));
    //cout<<ans<<endl;
    ans=max(ans,(lst));
    cout<<ans<<endl;
    }
    
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
