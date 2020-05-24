#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
 
using namespace __gnu_pbds;
using namespace std;
typedef long double ld;
typedef long long int ll;
typedef unsigned long long int sll;
//typedef  double ld;
#define A 1000000007ll
#define D 1000000000ll
#define B 998244353ll
#define C 1000000000000000000ll
#define FAST ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define oset tree<pair<ll,ll>, null_type,less<pair<ll,ll>>, rb_tree_tag,tree_order_statistics_node_update> 
#define pb push_back
#define puf push_front
#define pob pop_back
#define pof pop_front
#define mxe(v) *max_element(v.begin(),v.end())
#define mne(v) *min_element(v.begin(),v.end())
#define bs binary_search
#define lb lower_bound
#define ub upper_bound
#define ve vector
#define br break
#define PI 3.14159265358979323
ll n,m;
ll cnt=0;
//bool fg=0;
void dfs(ll x, ve<ll> v[], bool visited[],ll arr[], ll y, bool fg)
{
    visited[x]=true;
    if(arr[x]==1)
    {
        y++;
        fg=1;
        if(y>m)
            return;
    }
    if(fg==1&&arr[x]==0)
    {
        fg=0;
        y=0;
    }
    if(v[x].size()==1&&x!=0)
    {
        cnt++;
        //cout<<cnt<<"tyui"<<endl;
        return;
    }
    for (ll i = 0; i < v[x].size(); i++)
    {
        if(visited[v[x][i]]==false)
            dfs(v[x][i],v,visited,arr,y,fg);
    }
    
}

int main()
{
    FAST;
    ll a,b;
    cin>>n>>m;
    //cout<<n<<m<<endl;
    ve<ll> v[n];
    ll arr[n]={0};
    bool fg=0;
    for (ll i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    for (ll i = 0; i < n-1; i++)
    {
        cin>>a>>b;
        v[a-1].pb(b-1);
        v[b-1].pb(a-1);
    }
    bool visited[n]={false};
    //cout<<visited[2]<<endl;
    dfs(0,v,visited,arr,0,fg);

    cout<<cnt<<endl;
    

}