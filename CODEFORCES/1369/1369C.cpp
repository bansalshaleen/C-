#include <bits/stdc++.h>
 
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
    ll n,k;
    cin>>n>>k;
    ve<ll> v(n,0);
    for (ll i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    ve<ll> v1(k,0);
    for (ll i = 0; i < k; i++)
    {
        cin>>v1[i];
    }
    sort(v.begin(), v.end(), greater<ll> ());
    sort(v1.begin(), v1.end());
    ll ans=0;
    ll it=0, lst=k-1;
    bool fg=0;
    for (ll i = 0; i < k; i++)
    {
        ans+=v[it];
        //it++;
        //arr[it]=1;
        if(v1[i]==1){
            ans+=v[it];
        }
        else
        {
            lst+=(v1[i]-1);
            ans+=v[lst];
        }
        it++;
        
    }
    cout<<ans<<endl;
    
    
}

int main()
{
    FAST;
    #ifndef ONLINE_JUDGE
    freopen("../../input.txt", "r", stdin);
    freopen("../../output.txt", "w", stdout);
    #endif
    ll t;
    cin>>t;
    while (t--)
    {
        solve();
    }
    
    return 0;
}