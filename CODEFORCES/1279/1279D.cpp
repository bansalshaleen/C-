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
//ve<ll> dd(1000001,0);
ll powerb(ll x, ll y, ll m) 
{ 
    if (y == 0) 
        return 1; 
    ll p = powerb(x, y / 2, m) % m; 
    p = (p * p) % m; 
  
    return (y % 2 == 0) ? p : (x * p) % m; 
} 
void lowest(ll &den3, ll &num3) 
{ 
    // Finding gcd of both terms 
    ll common_factor = gcd(num3,den3); 
  
    // Converting both terms into simpler  
    // terms by dividing them by common factor  
    den3 = den3/common_factor; 
    num3 = num3/common_factor; 
} 

void addFraction(ll &num1, ll &den1, ll num2,  ll den2 ) 
{ 
    ll num3, den3;
    den3 = gcd(den1,den2); 
    den3 = (den1*den2) / den3; 
    num3 = (num1)*(den3/den1) + (num2)*(den3/den2); 
    lowest(den3,num3); 
    num1=num3;
    den1=den3;
} 
ve<ll> arr(1000001,0);
void solve()
{
    ll n;
    cin>>n;
    ve<ve<ll>> v(n);
    ll ki;
    unordered_map<ll,ll> m;
    for (ll i = 0; i < n; i++)
    {
        cin>>ki;
        v[i]=ve<ll> (ki,0);
        
        for (ll j = 0; j < ki; j++)
        {
            cin>>v[i][j];
            arr[v[i][j]]++;
        }
        
    }
    ll num=0, den=1;
    for (ll i = 0; i < n; i++)
    {
        //ll num1=1, den1=v[i].size();
        ll num2=0, den2=1;
        ll sss=0;
        for (ll j = 0; j < v[i].size(); j++)
        {
            sss+=arr[v[i][j]];
            //addFraction(num2, den2, arr[v[i][j]], n);
        }
        
        addFraction(num, den, sss, n*v[i].size());
        //cout<<num<<" "<<den<<endl;
    }
    den*=n;
    ll g=gcd(num, den);
    num/=g;
    den/=g;
    //cout<<num<<" "<<den<<endl;
    ll md=998244353;
    ll ans=powerb(den, md-2, md);
    ans*=num;
    ans%=md;
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