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

void primeFactors(ll n, ve<ll> &v) 
{ 
    while (n % 2 == 0) 
    { 
        v.pb(2);
        n = n/2; 
    } 
  
    for (ll i = 3; i <= sqrt(n); i = i + 2) 
    { 
        while (n % i == 0) 
        { 
            v.pb(i);
            n = n/i; 
        } 
    } 
  
    if (n > 2) 
        v.pb(n);
} 

void solve()
{
    //cout<<"hello"<<endl;
    ll n;
    cin>>n;
    ve<ll> v;
    v.clear();
    primeFactors(n,v);
    ve<pair<ll,ll>> vv;
    sort(v.begin(), v.end());
    ll ct=1, lst=v[0];
    for (ll i = 1; i < v.size(); i++)
    {
        if(v[i]==lst){
            ct++;
        }
        else{
            vv.pb({ct,lst});
            ct=1;
            lst=v[i];
        }
    }
    vv.pb({ct, lst});
    sort(vv.begin(), vv.end());
    /*
    for (ll i = 0; i < vv.size(); i++)
    {
        cout<<vv[i].first<<" "<<vv[i].second<<endl;
    }
    */
    ll k= vv.rbegin()->first;
    cout<<k<<endl;
    ve<ll> ans(k,1);
    for (ll i = 0; i < vv.size(); i++)
    {
        for (ll j = 0; j < vv[i].first; j++)
        {
            ans[k-j-1]*=vv[i].second;
        }
        
    }
    for (ll i = 0; i < k; i++)
    {
        cout<<ans[i]<<" ";
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
    cin>>t;
    while (t--)
    {
        solve();
    }
    
    return 0;
}