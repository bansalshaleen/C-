//Wrong ans on testcase3
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

ll n;
ve<ll> black, white;
void DFSb(ve<ll> v[], ll x)
{
    black[x]=1;
    for (ll i = 0; i < v[x].size(); i++)
    {
        if(black[v[x][i]]==0)
        {
            DFSb(v,v[x][i]);
        }
    }
    return;
    
}
void DFSw(ve<ll> v[], ll x)
{
    white[x]=0;
    for (ll i = 0; i < v[x].size(); i++)
    {
        if(white[v[x][i]]==1)
        {
            DFSw(v,v[x][i]);
        }
    }
    return;
    
}

int main()
{
    FAST;
    ll a,b,o;
    cin>>n;
    ve<int> color(n,0);
    for (ll i = 0; i < n; i++)
    {
        cin>>o;
        color[i]=o;
        black.pb(o);
        white.pb(o);
    }
    //ve<int> black,white;
    //black=color;
    //white=color;
    ve<ll> v[n];
    //bool visited[n]={false};
    for (ll i = 0; i < n-1; i++)
    {
        cin>>a>>b;
        v[a-1].pb(b-1);
        v[b-1].pb(a-1);
    }
    ll count1=0, count2=0;
    for (ll i = 0; i < n; i++)
    {
        if(black[i]==0)
        {
            DFSb(v,i);
            count1++;
        }
    }
    
    for (ll i = 0; i < n; i++)
    {
        if(white[i]==1)
        {
            DFSw(v,i);
            count2++;
        }
    }
    cout<<count1<<" "<<count2<<endl;
    cout<<min(count2, count1)<<endl;
    
    //DFS()
    
    
}