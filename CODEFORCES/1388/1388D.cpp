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
    ll n;
    cin>>n;
    ve<pair<ll,ll>> v(n, {0,0});
    //ve<ll> b(n,0);
    ve<ll> arr(n,0);
    for (ll i = 0; i < n; i++)
    {
        cin>>v[i].first;
    }
    for (ll i = 0; i < n; i++)
    {
        ll o;
        cin>>o;
        if(o!=-1)
        v[i].second=o-1;
        else{
            v[i].second=-1;
        }
        if(o==-1||o==i){
            cc;
        }
        else{
            arr[o-1]++;
        }
    }
    priority_queue<pair<ll,pair<ll,ll>>> p;
    for (ll i = 0; i < n; i++)
    {
        if(arr[i]==0){
            p.push({v[i].first,{v[i].second, i}});
            //br;
        }
    }
    ll ans=0;
    ve<ll> fn;
    while(!p.empty()){
        pair<ll,pair<ll,ll>> f=p.top();
        if(f.first>=0||f.second.first==-1||arr[f.second.first]==0){
        p.pop();
        ans+=f.first;
        v[f.second.first].first+=f.first;
        fn.pb(f.second.second+1);
        arr[f.second.first]--;
        if(arr[f.second.first]==0){
            p.push({v[f.second.first].first,{v[f.second.first].second, f.second.first}});
        }
        }
        else{
            arr[f.second.first]--;
        if(arr[f.second.first]==0){
            p.push({v[f.second.first].first,{v[f.second.first].second, f.second.first}});
        }
        }
    }
    cout<<ans<<endl;
    for (ll i = 0; i < n; i++)
    {
        cout<<fn[i]<<" ";
    }
    cout<<endl;
    

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