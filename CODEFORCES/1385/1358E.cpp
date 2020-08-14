#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <numeric>
#include <iomanip>
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

template <typename Number>
Number gcd(Number u, Number v) {
    while (v != 0) {
        Number r = u % v;
        u = v;
        v = r;
    }
    return u;
}

ll V;

ll binSearch(ve<ll> v, ll l, ll r,ll x) 
{ 
    if (r >= l) { 
        ll mid = l + (r - l) / 2; 
        if (v[mid] == x) 
            return mid; 
        if (v[mid] > x) 
            return binSearch(v, l, mid - 1, x); 
        return binSearch(v, mid + 1, r, x); 
    } 
    return -1; 
} 

bool isCyclicUtil(ll v, bool visited[], bool *recStack, ve<ll> adj[]) 
{ 
    if(visited[v] == false) 
    { 
        // Mark the current node as visited and part of recursion stack 
        visited[v] = true; 
        recStack[v] = true; 
  
        // Recur for all the vertices adjacent to this vertex 
        //list<ll>::iterator i; 
        for(auto i = adj[v].begin(); i != adj[v].end(); ++i) 
        { 
            if ( !visited[*i] && isCyclicUtil(*i, visited, recStack, adj) ) 
                return true; 
            else if (recStack[*i]) 
                return true; 
        } 
  
    } 
    recStack[v] = false;  // remove the vertex from recursion stack 
    return false; 
} 

bool isCyclic(ve<ll> v[],ll node) 
{ 
    // Mark all the vertices as not visited and not part of recursion 
    // stack 
    bool *visited = new bool[V]; 
    bool *recStack = new bool[V]; 
    for(ll i = 0; i < V; i++) 
    { 
        visited[i] = false; 
        recStack[i] = false; 
    } 
  
    // Call the recursive helper function to detect cycle in different 
    // DFS trees 
     
    if (isCyclicUtil(node, visited, recStack, v)) 
        return true; 
  
    return false; 
} 

void solve()
{
    ll n,m;
    cin>>n>>m;
    V=n;
    //v.clear();
    //v->clear();
    ve<ll> v[n];
    //ve<pair<ll,ll>> ue;
    ll t,x,y;
    ve<ve<ll>> ans(m, ve<ll> (3,0));
    for (ll i = 0; i < m; i++)
    {
        cin>>t>>x>>y;
        ans[i]={t,x-1,y-1};
        if(t==1){
            v[x-1].pb(y-1);
        }
    }
    ll jj=0;
    for (ll i = 0; i < m; i++)
    {
        if(ans[i][0]==0){
        v[ans[i][1]].pb(ans[i][2]);
        if(!isCyclic(v,ans[i][1])){
            //ans[jj]={ue[i].first+1,ue[i].second+1};
            continue;
        }
        else{
            v[ans[i][1]].pop_back();
            v[ans[i][2]].pb(ans[i][1]);
            if(!isCyclic(v,ans[i][2])){
                //ans[jj]={ue[i].second+1,ue[i].first+1};
                swap(ans[i][2], ans[i][1]);
                cc;
            }
            else{
                cout<<"NO"<<endl;
                return;
            }
        }
        }
    }
    for (ll i = 0; i < n; i++)
    {
        if(isCyclic(v,i)){
            cout<<"NO"<<endl;
            return;
        }
    }
    
    cout<<"YES"<<endl;
    for (ll i = 0; i < ans.size(); i++)
    {
        cout<<ans[i][1]+1<<" "<<ans[i][2]+1<<endl;
    }
    return;
    
}

int main()
{
    FAST;
    #ifndef ONLINE_JUDGE
    freopen("../../input.txt", "r", stdin);
    freopen("../../output.txt", "w", stdout);
    #endif
    ll t;
    t=1;
    cin>>t;
    while (t--)
    {
        solve();
    }
    
    return 0;
}