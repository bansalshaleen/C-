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

template <typename Number>
Number binSearch(ve<Number> v, Number l, Number r, Number x) 
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
void fxn(ve<ll>& sm, ve<ll> v[], ll ini, ve<bool>& visited, ll w){
    sm[w]+=ini;
    for (ll i = 0; i < v[w].size(); i++)
    {
        /* code */
        if(!visited[v[w][i]]){
            visited[v[w][i]]=1;
            fxn(sm,v,sm[w],visited,v[w][i]);
        }
    }
    
}

void solve()
{
    //cout<<"hello"<<endl;
    ll n,q;
    cin>>n>>q;
    ve<ll> v[n];
    for (ll i = 0; i < n-1; i++)
    {
        ll a,b;
        cin>>a>>b;
        v[a-1].pb(b-1);
        v[b-1].pb(a-1);
    }
    ve<ll> sm(n,0);
    for (ll i = 0; i < q; i++)
    {
        ll a,b;
        cin>>a>>b;
        sm[a-1]+=b;
    }
    ve<bool> visited(n,0);
    visited[0]=1;
    fxn(sm, v, 0, visited,0);
    for (ll i = 0; i < n; i++)
    {
        cout<<sm[i]<<" ";
    }
    cout<<endl;
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
    //cin>>t;
    while (t--)
    {
        solve();
    }
    
    return 0;
}