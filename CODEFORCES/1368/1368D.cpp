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
    ll n;
    cin>>n;
    ve<ll> v(n,0);
    ll a,b;
    for (ll i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    ll arr[21]={0};
    for (ll i = 0; i < 21; i++)
    {
        arr[i]=0;
    }
    for (ll i = 0; i < n; i++)
    {
        ll it=0;
        while (v[i]!=0)
        {
            if(v[i]%2==1)
            {
                arr[it]++;
            }
            v[i]/=2;
            it++;
        }
        
    }
    ll m=0;
    for (ll i = 0; i < 21; i++)
    {
        m=max(m,arr[i]);
    }
    
    ll temp=0;
    ll ans=0;
    for(ll i=0; i<m;i++)
    {
        temp = 0;
        for(ll j=0;j<21;j++)
        {
            if(arr[j]!=0)
            {
                temp += powl(2,j);
                arr[j]--;
            }
        }
        ans += temp*temp;
    }
    cout<<ans<<endl;
    return;
    
}

int main()
{
    FAST;
    #ifndef ONLINE_JUDGE
    freopen("../../input.txt", "r", stdin);
    freopen("../../output.txt", "w", stdout);
    #endif
    ll t=1;
    //cin>>t;
    while (t--)
    {
        solve();
    }
    
    return 0;
}