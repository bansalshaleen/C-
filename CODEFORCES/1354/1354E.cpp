// not completed
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
ll n1,n2,n3;
//ll count=0;
bool checkbipartite(ve<ll> v[], ll src, ll color[])
{
    //ll color[n]={-1};
    color[src]=1;
    queue<ll> q;
    q.push(src);
    while(!q.empty())
    {
        ll u=q.front();
        q.pop();
        for (ll i = 0; i < v[u].size(); i++)
        {
            if(color[v[u][i]]==-1)
            {
                color[v[u][i]] = 1 - color[u]; 
                q.push(v[u][i]); 
            }
            else if(color[v[u][i]]==color[u])
                return false;
        }
        
    }
    return true;
}
int main()
{
    FAST;
    ll a,b;
    cin>>n>>m;
    cin>>n1>>n2>>n3;
    ve<ll> v[n];
    for (ll i = 0; i < m; i++)
    {
        cin>>a>>b;
        v[a-1].pb(b-1);
        v[b-1].pb(a-1);
    }
    ll arr[n]={-1};
    bool visited[n]={false};
    ll color[n]={-1};
    if(!checkbipartite(v,0,color))
    {
        cout<<"NO"<<endl;
    }
    else if()
    {

    }
    else
    {
        cout<<"YES"<<endl;
        ll cnt1=0;
        for (ll i = 0; i < n; i++)
        {
            if(color[i]==1)
                cnt1++;
            
        }
        if(n2==cnt1)
        {
            for (ll i = 0; i < n; i++)
            {
                if(color[i]==1)
                    cout<<2;
                else if(color[i]==0&&n1>0)
                {
                    cout<<1;
                    n1--;
                }
                else
                {
                    cout<<3;
                }
                
            }
            cout<<endl;
            
        }
        else
        {
            for (ll i = 0; i < n; i++)
            {
                if(color[i]==0)
                    cout<<2;
                else if(color[i]==1&&n1>0)
                {
                    cout<<1;
                    n1--;
                }
                else
                {
                    cout<<3;
                }
                
            }
            cout<<endl;
        }
        

    }
    
    return 0;
}