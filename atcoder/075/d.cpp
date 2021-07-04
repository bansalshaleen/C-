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
ll n;
//template <typename Number>
ll binSearch(ve<ll>& v, ll l, ll r, ll a, ll b) 
{ 
    if (r >= l) { 
        ll mid = l + (r - l) / 2; 
        ll cnt=0;
        for (ll i = 0; i < n; i++)
        {
            ll tp=v[i];
            tp-=b*mid;
            if(tp>0){
                cnt+=ceil((ld)tp/(ld)(a-b));
            }
        }
        ll mid1=mid-1;
        ll cnt1=0;
        for (ll i = 0; i < n; i++)
        {
            ll tp=v[i];
            tp-=b*mid1;
            if(tp>0){
                cnt1+=ceil((ld)tp/(ld)(a-b));
            }
        }
        
        if (cnt <= mid&&cnt1>mid1) 
            return mid; 
        else if(cnt1==mid1){
            return mid1;
        }
        else if (cnt1 < mid1) 
            return binSearch(v, l, mid - 1, a, b); 
        return binSearch(v, mid + 1, r, a, b); 
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
    ll a,b;
    cin>>n>>a>>b;
    ve<ll> v(n,0);
    ll sum=0;
    for (ll i = 0; i < n; i++)
    {
        cin>>v[i];
        sum+=v[i];
    }
    ll mx=(sum/b)+1;
    ll ans=binSearch(v,1,mx,a,b);
    cout<<ans<<endl;
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