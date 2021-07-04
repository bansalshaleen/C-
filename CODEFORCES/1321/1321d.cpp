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
ll n;
ve<ll> v[200001];

void dijkstra(ll s, vector<ll> & d, vector<ll> & p) {
    d.assign(n, A);
    p.assign(n, -1);

    d[s] = 0;
    using pii = pair<ll, ll>;
    priority_queue<pii, vector<pii>, greater<pii>> q;
    q.push({0, s});
    while (!q.empty()) {
        ll v_v = q.top().second;
        ll d_v = q.top().first;
        q.pop();
        if (d_v != d[v_v])
            continue;

        for (auto edge : v[v_v]) {
            ll to = edge;
            ll len = 1;

            if (d[v_v] + len < d[to]) {
                d[to] = d[v_v] + len;
                p[to] = v_v;
                q.push({d[to], to});
            }
        }
    }
}

void solve()
{
    //cout<<"hello"<<endl;
    ll m;
    cin>>n>>m;
    
    for (ll i = 0; i < m; i++)
    {
        ll a,b;
        cin>>a>>b;
        v[a-1].pb(b-1);
        //v[b-1].pb(a-1);
    }
    ll k;
    cin>>k;
    ve<ll> path(k,0);
    ve<ll> dist(n,0), parent(n,0);
    for (ll i = 0; i < k; i++)
    {
        cin>>path[i];
        path[i]--;
    }
    ll dest=path[k-1];
    ll sour=path[0];

    //ve<bool> visited(n,0);
    dijkstra(dest, dist, parent);
    ll mx=0, mn=0;
    for (ll i = 0; i < n; i++)
    {
        cout<<dist[1]<<endl;
    }
    
    
    
    for (ll i = 0; i < k-1; i++)
    {
        ll len=A, minlen=0;
        for (ll j = 0; j < v[path[i]].size(); j++)
        {
            if(dist[v[path[i]][j]]<len){
                len=dist[v[path[i]][j]];
                minlen=1;
            }
            else if(dist[v[path[i]][j]]==len){
                minlen++;
            }
        }
        cout<<i<<" "<<path[i]<<" "<<len<<" "<<minlen<<endl;
        if(minlen>1){
            mx++;
            if(dist[path[i+1]]!=len){
                mn++;
            }
        }
        else{
            if(dist[path[i+1]]!=len){
                mx++;
                mn++;
            }
        }
    }
    //cout<<dist[1]<<endl;
    cout<<mn<<" "<<mx<<endl;
    
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