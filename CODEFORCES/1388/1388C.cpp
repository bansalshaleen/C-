#include <bits/stdc++.h>
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
Number gcd(Number m, Number n) {
    if(m < n)
        swap(m, n);
    if(n == 0)
        return m;
    return gcd(m % n, n);
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

ll power(ll a, ll b){
    ll result=1;
    while(b>0){
        if(b%2==1) result*=a;
        a*=a;
        b/=2;
    }
    return result;
}
bool ans=true;
void dfs(ve<ll> v[], ve<bool>& visited, ve<ll>& fn, ll ind, ve<ll> &p, ve<ll> &h, ve<ll> &g){
    visited[ind]=1;
    ll sm=0, ggg=0;
    for (ll i = 0; i < v[ind].size(); i++)
    {
        if(!visited[v[ind][i]]){
            dfs(v,visited, fn, v[ind][i],p,h,g);
            sm+=fn[v[ind][i]];
            ggg+=g[v[ind][i]];
            //cout<<v[ind][i]<<endl;
        }
    }
    sm+=p[ind];
    fn[ind]=sm;
    if((fn[ind]+h[ind])%2==0){

    }
    else{
        //cout<<fn[ind]<<" "<<h[ind]<<endl;
        //cout<<ind<<endl;
        ans=false;
    }
    g[ind]=(fn[ind]+h[ind])/2;
    if(g[ind]>=0&&g[ind]<=fn[ind]){

    }
    else{
        ans=false;
    }
    if(ggg<=g[ind]){

    }
    else{
        ans=false;
    }
}

void solve()
{
    ll n,m;
    cin>>n>>m;
    ve<ll> p(n,0), h(n,0), g(n,0);
    for (ll i = 0; i < n; i++)
    {
        cin>>p[i];
    }
    for (ll i = 0; i < n; i++)
    {
        cin>>h[i];
    }
    ve<ll> v[n];
    for (ll i = 0; i < n-1; i++)
    {
        ll a,b;
        cin>>a>>b;
        v[a-1].pb(b-1);
        v[b-1].pb(a-1);
    }
    ve<bool> visited(n,0);
    ve<ll> fn(n,0);
    ans=1;
    dfs(v,visited, fn, 0,p,h,g);
    //ll pp=(fn[0]+h[0])/2;
    if(ans){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

    
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