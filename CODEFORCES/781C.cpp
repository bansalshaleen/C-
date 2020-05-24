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

ve<ll> v1;
ll n,m,k;
void DFS(ve<ll> v[], ll x, bool visited[])
{
    visited[x]=true;
    v1.pb(x);
    for (ll i = 0; i < v[x].size(); i++)
    {
        /* code */
        if(visited[v[x][i]]==false)
        {
            DFS(v,v[x][i],visited);
            v1.pb(x);
        }
    }
    return;
}

int main()
{
    FAST;
    ll a,b;
    cin>>n>>m>>k;
    ve<ll> v[n];
    bool visited[n]={false};
    for (ll i = 0; i < m; i++)
    {
        cin>>a>>b;
        v[a-1].pb(b-1);
        v[b-1].pb(a-1);
    }
    DFS(v,0,visited);
    //v1.pb(0);
    ll q=(2*n-1)/k;
    ll rem=(2*n-1)%k;
    ll last=0;
    ll j=last;
    for (ll i = 0; i < rem; i++)
    {
        /* code */
        cout<<q+1<<" ";
        while(j-last<q+1)
        {
            cout<<v1[j]+1<<" ";
            j++;
        }
        last=j;
        cout<<endl;
        
    }
    for (ll i = rem; i < k; i++)
    {
        /* code */
        cout<<q<<" ";
        //j=0;
        while(j-last<q)
        {
            cout<<v1[j]+1<<" ";
            j++;
        }
        last=j;
        cout<<endl;
    }
    

    return 0;
}