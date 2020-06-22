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

ll ans=0;

void dfs(ve<ll> adj[], bool visited[], ll node, ve<ll> &temp)
{
    
    visited[node]=true;
    temp.pb(node);
    ans++;
    for (ll i = 0; i < adj[node].size(); i++)
    {
        if (!visited[adj[node][i]])
        {
            dfs(adj, visited, adj[node][i], temp);
        }
        
    }
    return;

}
void solve()
{
    ll n,m;
    cin>>n>>m;
    ve<ll> inc(n,0);
    ve<ll> pu(n,0);
    ld ratio, mx=(float)0;
    for (ll i = 0; i < n; i++)
    {
        cin>>inc[i];
    }
    for (ll i = 0; i < n; i++)
    {
        cin>>pu[i];
    }
    ve<ll> v;
    for (ll i = 0; i < n; i++)
    {
        ratio=(ld)inc[i]/pu[i];
        //cout<<ratio<<endl;
        if(mx<ratio)
            mx=ratio;
    }
    for (ll i = 0; i < n; i++)
    {
        ratio=(ld)inc[i]/pu[i];
        
        if (ratio==mx)
        {
            v.pb(i);
        }
        
        
    }
    
    ve<ll> adj[n];
    ll a,b;
    for (ll i = 0; i < m; i++)
    {
        cin>>a>>b;
        adj[a-1].pb(b-1);
        adj[b-1].pb(a-1);
    }
    if(v.size()==1)
    {
        cout<<1<<endl;
        cout<<v[0]+1<<endl;
        return;
    }
    bool visited[n]={true};
    for (ll i = 0; i < n; i++)
    {
        visited[i]=true;
    }
    
    for (ll i = 0; i < v.size(); i++)
    {
        visited[v[i]]=false;
    }
    ll final=0;
    ve<ll> fff;
    ve<ll> temp;
    for (ll i = 0; i < n; i++)
    {
        if(!visited[i])
        {
            ans=0;
            temp.clear();
            dfs(adj,visited,i,temp);
            if(final<ans)
            {
                fff.clear();
                fff=temp;
                final=ans;
            }
        }
    }
    cout<<final<<endl;
    for (ll i = 0; i < fff.size(); i++)
    {
        cout<<fff[i]+1<<" ";
    }
    cout<<endl;
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