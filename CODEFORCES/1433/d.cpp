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

void solve()
{
    //cout<<"hello"<<endl;
    ll n;
    cin>>n;
    //ve<ll> v(n,0);
    map<ll,ve<ll>> m;
    for (ll i = 0; i < n; i++)
    {
        ll a;
        cin>>a;
        m[a].pb(i+1);
    }
    ll k=m.size();
    ve<ll> v[m.size()];
    ll j=0;
    for (auto i = m.begin(); i !=m.end() ; i++)
    {
        v[j]=i->second;
        j++;
    }
    for (ll i = 0; i < k; i++)
    {
        /* code */
        for (ll j = 0; j < v[i].size(); j++)
        {
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
        
    }
    //priority_queue<pair<ll,ll>> q;
    ve<pair<ll,ll>> vv(k);
    bool fg=0;
    for (ll i = 0; i < k; i++)
    {
        vv.pb({v[i].size(),i});
        if(v[i].size()>n/2){
            fg=1;
            br;
        }
    }
    if(fg){
        cout<<"NO"<<endl;
        return;
    }
    
    //ve<pair<ll,ll>> ans;
    ve<ll> aa;
    sort(vv.rbegin(), vv.rend());
    aa.pb(v[vv[0].second][vv[0].first-1]);
    vv[0].first--;

    ll cnt=1, lst=0, hghi=-1, hgh=0;
    while(cnt<n){
        for (ll i = 0; i < k; i++)
        {
            if(i==lst){
                cc;
            }
            if(hgh<vv[i].first){
                hgh=vv[i].first;
                hghi=i;
            }

        }
        lst=hghi;
        aa.pb(v[vv[lst].second][vv[lst].first-1]);
        vv[lst].first--;
        cnt++;
        
    }
    cout<<"YES"<<endl;
    for (ll i = 0; i < n-1; i++)
    {
        //ans.pb({aa[i], aa[i+1]});
        cout<<aa[i]<<" "<<aa[i+1]<<endl;
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