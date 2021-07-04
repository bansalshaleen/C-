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
    ll n,c;
    cin>>n>>c;
    //cout<<(((n*(n+1))/2)-1)<<endl;
    if((c<(n-1))||(c>(((n*(n+1))/2)-1))){
        cout<<"IMPOSSIBLE"<<endl;
        return;
    }
    ve<ll> v(n,0);
    for (ll i = 0; i < n; i++)
    {
        v[i]=i+1;
    }
    ll cnt=0;
    for (ll i = 0; i < n-1; i++)
    {
        if(c>(n-i-1)){
            if((c-(n-i-2))>(n-i)){
                if(i%2==0)
                reverse(v.begin()+i, v.end()-cnt);
                if(i%2==1){
                reverse(v.begin()+i+cnt, v.end());
                cnt++;
                }
                c-=(n-i-cnt);
                //cnt++;
                cout<<i<<" "<<c<<" "<<cnt<<endl;
            }
            else{
                reverse(v.begin()+i, v.begin()+(c-n+i+2));
                c=(n-i-2);
                cout<<i<<" "<<c<<" "<<cnt<<endl;
            }
        }
        else{
            br;
        }
    }
    for (ll i = 0; i < n; i++)
    {
        cout<<v[i]<<" ";
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
    ll i=0;
    while (t--)
    {
        cout<<"Case #"<<i+1<<": ";
        solve();
        i++;
    }
    return 0;
}