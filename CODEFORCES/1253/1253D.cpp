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

//ll mx=0;
void dfs(ve<bool> &visited, ve<ll> v[], ll node, ve<ll> &temp, ll &mx){
    visited[node]=1;
    temp.pb(node);
    if(node>mx)
        mx=node;
    //cout<<mx<<"dsa"<<endl;
    for (ll i = 0; i < v[node].size(); i++)
    {
        if(!visited[v[node][i]]){
            dfs(visited, v, v[node][i], temp, mx);
        }
    }
    return;
    
}

void solve()
{
    ll n,m;
    cin>>n>>m;
    ve<ll> v[n];
    ll a,b;
    for (ll i = 0; i < m; i++)
    {
        cin>>a>>b;
        v[a-1].pb(b-1);
        v[b-1].pb(a-1);

    }
    ve<bool> visited(n,0);
    ve<ll> temp;
    ll ans=0;
    ll i=0;
    ll mx=0;
    for(ll i=0;i<n;i++)
    {
        if(!visited[i]){
            //temp.clear();
            //mx=0;
            dfs(visited, v, i, temp, mx);
            if(temp.size()!=(mx+1)){
                ans++;
                //cout<<temp.size()<<" "<<mx<<" "<<i<<endl;
            }
        }
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