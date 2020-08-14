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
Number gcd(Number u, Number v) {
    while (v != 0) {
        Number r = u % v;
        u = v;
        v = r;
    }
    return u;
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

void chnge(string &a, ll i1, ll i2){
    for (ll i = i1; i <= i2; i++)
    {
        if(a[i]=='0')
        a[i]='1';
        else{
            a[i]='0';
        }
    }
    reverse(a.begin()+i1, a.begin()+i2+1);
    return;
}

void solve()
{
    ll n;
    cin>>n;
    string a,b;
    cin>>a>>b;
    ve<ll> ans;
    //cout<<a<<" "<<b<<endl;
    for (ll i = n-1; i >= 0; i--)
    {
        if(a[i]==b[i]){
            cc;
        }
        else{
            if(a[0]!=a[i]){
                ans.pb(1);
                chnge(a,0,0);
            }
            ans.pb(i+1);
            chnge(a,0,i);
            //cout<<a<<endl;
        }
    }
    cout<<ans.size()<<" ";
    for (ll i = 0; i < ans.size(); i++)
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