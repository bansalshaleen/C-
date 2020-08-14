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
        if (v[mid] >= x&&(mid!=0?v[mid-1]<x:1))
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
    ll k;
    cin>>k;
    ll n=2;
    ll len=1;
    ll sum=1;
    ll dig=10;
    ll last=1;
    ve<ll> v;
    v.pb(1);
    while(sum+last+len<k){
        if(n==dig){
            dig*=10;
            len++;
        }
        sum+=(last+len);
        last=last+len;
        n++;
        v.pb(last);
    }
    ll jj=binSearch(v,(ll)0, (ll)v.size()-1, k-sum);
    if(jj==-1){
        
    }
    //jj=v[jj];
    jj++;
    ll val=jj;
    ll cnt=0;
    while(val!=0){
        cnt++;
        val/=10;
    }
    while(k-sum-v[jj-1]>0){
        jj/=10;
        k++;
    }
    cout<<jj%10<<endl;
    
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