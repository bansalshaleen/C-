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

//l nm=0;

void dfs(ll id, ve<ll> v[], ve<bool>& visited){
    visited[id]=1;
    //nm++;
    for (ll i = 0; i < v[id].size(); i++)
    {
        if(!visited[v[id][i]]){
            dfs(v[id][i], v, visited);
        }
    }
    
}

void solve()
{
    ll n;
    cin>>n;
    string a,b;
    cin>>a>>b;
    ve<ll> v[26];
    for (ll i = 0; i < n; i++)
    {
        if(a[i]>b[i])
        {
            cout<<-1<<endl;
            return;

        }
        if(a[i]!=b[i]){
            auto it=find(v[a[i]-'a'].begin(), v[a[i]-'a'].end(), b[i]-'a');
            if(it==v[a[i]-'a'].end()){
            v[a[i]-'a'].pb(b[i]-'a');
            v[b[i]-'a'].pb(a[i]-'a');
            }
        }

    }
    /*
    for (ll i = 0; i < 26; i++)
    {
        for (ll j = 0; j < v[i].size(); j++)
        {
            cout<<i<<" "<<v[i][j]<<" ";
        }
        cout<<endl;
        
    }
    */
    
    ve<bool> visited(26,0);
    ll ans=26;
    for (ll i = 0; i < 26; i++)
    {
        if(!visited[i]){
            //nm=0;
            dfs(i,v,visited);
            ans--;
        }
        else{
            //ans++;
        }
    }
    
    cout<<ans<<endl;
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