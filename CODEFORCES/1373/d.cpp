#include <bits/stdc++.h>
 
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

ll maxsubarr(ve<ll> v){
    ll maxsofar=0, maxcurr=0;
    for (ll i = 0; i < v.size(); i++)
    {
        maxcurr+=v[i];
        if(maxcurr>maxsofar){
            maxsofar=maxcurr;
        }
        if(maxcurr<0){
            maxcurr=0;
        }
    }
    return maxsofar;
}

void solve()
{
    ll n;
    cin>>n;
    ve<ll> v(n,0);
    ll sum=0;

    for (ll i = 0; i < n; i++)
    {
        cin>>v[i];
        if(i%2==0){
            sum+=v[i];
        }
    }
    ve<ll> od;
    ve<ll> ev;
    for (ll i = 1; i < n-1; i+=2)
    {
        od.pb(v[i]-v[i+1]);
    }
    for (ll i = 0; i < n-1; i+=2)
    {
        ev.pb(v[i+1]-v[i]);
    }
    //ll qw=gcd(1,2);
    ll sm1=maxsubarr(od);
    ll sm2=maxsubarr(ev);
    //cout<<sm1<<" "<<sm2<<endl;
    ll ans;
    ans=max(sum, sum+sm1);
    ans=max(ans, sum+sm2);
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
    cin>>t;
    while (t--)
    {
        solve();
    }
    
    return 0;
}