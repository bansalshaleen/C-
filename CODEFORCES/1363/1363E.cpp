#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
 
using namespace __gnu_pbds;
using namespace std;
 
typedef   long long int ll;
typedef unsigned long long int sll;
typedef long double ld;
#define A 1000000007ll
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

ll start[100001]; 
ll endd[100001]; 
  
// Storing dfs order 
vector<ll>dfs_order; 
vector<ll>adj[200001]; 
int visited[100001]; 
ve<ll> subt;
void dfs(ll a,ll &b) 
{ 
  
    // keep track of node visited 
    visited[a]=1; 
    b++; 
    start[a]=b; 
    dfs_order.push_back(a); 
      
    for(vector<ll>:: iterator it=adj[a].begin(); 
                           it!=adj[a].end();it++) 
    { 
        if(!visited[*it]) 
        { 
            dfs(*it,b); 
        } 
    } 
    endd[a]=b; 
} 
  
// Function to print the subtree nodes 
void Print(ll n) 
{ 
    ll i=n;
        // if node is leaf node 
        // start[i] is equals to endd[i] 
        subt.resize(1,i);
        //subt[0]=i;
        if(start[i]!=endd[i]) 
        { 
            cout<<"subtree of node "<<i<<" is "; 
            for(ll j=start[i]+1;j<=endd[i];j++) 
            { 
                //cout<<dfs_order[j-1]<<" "; 
                subt.pb(dfs_order[j-1]);
            } 
            cout<<endl; 
        } 
     
} 


int main()
{
    FAST;
    ll n,u,y,o;
    cin>>n;
    ll b[n]={0}, c[n]={0};
    ve<pair<ll,ll>> a;
    for (ll i = 0; i < n; i++)
    {
        cin>>o;
        a.pb({o,i});
        cin>>b[i]>>c[i];
    }
    for (ll i = 0; i < n-1; i++)
    {
        cin>>u>>y;
        adj[u-1].pb(y-1);
        adj[y-1].pb(u-1);

    }
    ll e=0;
    dfs(0, e);
    sort(a.begin(), a.end());
    
    return 0;
}