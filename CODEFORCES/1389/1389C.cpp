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
    string s;
    cin>>s;
    ll n=s.length();
    ve<ll> v[10];
    //ll ans=0;
    bool fg=0;
    ll id=0;
    ll ans=0, sm=0;
    for (ll i = 0; i < n; i++)
    {
        v[s[i]-'0'].pb(i);
    }
    
    for(ll i=0;i<10;i++){
        ans=max(ans, (ll)v[i].size());
        for (ll j = 0; j < 10; j++)
        {
            if(i==j){
                cc;
            }
            if(v[i].size()==0||v[j].size()==0){
                cc;
            }
            bool fg=0; ll tp=-1;
            ll id=0, id1=0;
            sm=0;
            while(1){
                if(!fg){
                    while(id<v[i].size()&&v[i][id]<tp){
                        id++;
                    }
                    if(id>=v[i].size()){
                        br;
                    }
                    else{
                        sm++;
                        fg=1;
                        tp=v[i][id];
                    }
                }
                else{
                    while(id1<v[j].size()&&v[j][id1]<tp){
                        id1++;
                    }
                    if(id1>=v[j].size()){
                        br;
                    }
                    else{
                        sm++;
                        fg=0;
                        tp=v[j][id1];
                    }
                }
            }
            if(sm%2!=0){
                sm--;
            }
            ans=max(ans, sm);
        }
        
    }
    cout<<n-ans<<endl;
    
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