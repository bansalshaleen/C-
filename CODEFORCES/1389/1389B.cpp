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

void solve()
{
    ll n,k,z;
    cin>>n>>k>>z;
    ve<ll> v(n,0);
    ve<ll> mx(n-1,0);
    for (ll i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    //mx[0]=v[0];
    for (ll i = 0; i < n-1; i++)
    {
        mx[i]=max(i!=0?mx[i-1]:0, v[i]+v[i+1]);
    }
    ll sum=v[0], sm1=v[0], sm2=v[0], sm3=v[0], sm4=v[0], sm5=v[0];
    for(int i=1;i<=k;i++){
        sum+=v[i];
        if(i<=k-2){
            sm1+=v[i];
        }
        if(i<=k-4){
            sm2+=v[i];
        }
        if(i<=k-6){
            sm3+=v[i];
        }
        if(i<=k-8){
            sm4+=v[i];
        }
        if(i<=k-10){
            sm5+=v[i];
        }
    }
    if(k-2>=0){
        sm1+=(mx[k-2]);
    }
    if(k-4>=0){
        sm2+=(2*(mx[k-4]));
    }
    if(k-6>=0){
        sm3+=(3*(mx[k-6]));
    }
    if(k-8>=0){
        sm4+=(4*(mx[k-8]));
    }
    if(k-10>=0){
        sm5+=(5*(mx[k-10]));
    }
    if(z==0){
        cout<<sum<<endl;
        return;
    }
    ll ans=max(sum,sm1);
    if(z==1){
        cout<<ans<<endl;
        return ;
    }
    ans=max(ans,sm2);
    if(z==2){
        cout<<ans<<endl;
        return ;
    }
    ans=max(ans,sm3);
    if(z==3){
        cout<<ans<<endl;
        return ;
    }
    ans=max(ans,sm4);
    if(z==4){
        cout<<ans<<endl;
        return ;
    }
    ans=max(ans,sm5);
    cout<<ans<<endl;
    return ;
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