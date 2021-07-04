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
bool sortbysec(pair<ll,ll> p1, pair<ll,ll> p2){
    if(p1.second<p2.second){
        return true;
    }
    else if(p1.second==p2.second){
        return p1.first<p2.first;
    }
    else{
        return false;
    }
}
void solve()
{
    //cout<<"hello"<<endl;
    ll n;
    cin>>n;
    ve<ll> v(n,0), v1(n,0);
    ve<pair<ll,ll>> vv(n,{-1,0});
    for (ll i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    for (ll i = 0; i < n; i++)
    {
        vv[v[i]-1].second = max(i-vv[v[i]-1].first, vv[v[i]-1].second);
        vv[v[i]-1].first=i;

    }
    for (ll i = 0; i < n; i++)
    {
        vv[i].second=max(vv[i].second, n-vv[i].first);
    }
    
    for (ll i = 0; i < n; i++)
    {
        vv[i].first=i;
        cout<<vv[i].first<<" "<<vv[i].second<<endl;
    }
    
    sort(vv.begin(), vv.end(), sortbysec);
    ll mrk=0;
    for (ll i = 0; i < n; i++)
    {
        if(vv[i].second==0){
            continue;
        }
        if(vv[i].second>mrk)
            v1[vv[i].second-1]=vv[i].first;
        mrk=vv[i].second;
    }
    mrk=-2;
    for (ll i = 0; i < n; i++)
    {
        if(v1[i]==0){
            v1[i]=mrk;
        }
        else{
            mrk=v1[i];
        }
    }
    for (ll i = 0; i < n; i++)
    {
        cout<<v1[i]+1<<" ";
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