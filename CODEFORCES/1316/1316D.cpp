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

ll n;

template <typename Number>
Number gcd(Number u, Number v) {
    while (v != 0) {
        Number r = u % v;
        u = v;
        v = r;
    }
    return u;
}

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


void dfs(ve<ve<bool> >& visited, ll x, ll y, ve<ve<string>>& final, ve<ve<pair<string,string>>>& v, ll h){
    visited[x][y]=1;
    if(v[x][y] == make_pair(to_string(x+1),to_string(y+1))){
        final[x][y]="X";
    }
    if(!visited[min(x+1,n)][y]&&v[max(n,x+1)][y]==v[x][y]){
        dfs(visited,x+1,y, final, v);
        
    }
    if(!visited[x][min(n,1+y)]&&v[x][min(n,y+1)]==v[x][y]){
        dfs(visited,x,y+1, final, v);
    }
    return;
}
void solve()
{
    string x,y;
    cin>>n;
    ve<ve<pair<string, string>>> v(n, ve<pair<string,string>> (n));
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < n; j++)
        {
            cin>>x>>y;
            v[i][j]={x,y};
        }
        
    }
    ve<ve<bool> > visited(n,ve<bool> (n,0));
    ve<ve<string>> final(n,ve<string> (n));
    bool fg=0;
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < n; j++)
        {
            if(!visited[i][j]){
                dfs(visited,i,j,final,v,);
            }
        }
        
    }
    

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